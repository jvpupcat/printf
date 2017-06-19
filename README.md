## Printf Project

# <img src="http://www.controlprt.com/images/pip_ps__printing_1_main_708x432.jpg">

**Author: [Joann Vuong](https://www.linkedin.com/in/joann-vuong-954b3220/)**
**Author: [Steven Coyne](https://www.linkedin.com/in/steven-coyne-b9341b9a/)**

*Holberton School - May 2017 Batch 3*

## Synopsis

This project uses the C programming language to recreate some of the printf functions. Notably, %%, %c, %s, %d, and %i.

## Resources

- man `gcc`
- man (3) `printf`, `puts`, `putchar`
- [Secret of Printf](http://www.cypress.com/file/54761/download)

## What students should learn from this project

- At the end of this project you are expected to be able to explain:
	- how printf identifies conversions
	- once a conversion is identified, how a function is returned
	- how %c, %s, %d, %i, and %% are printed out

## Requirements for the Printf Project

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one showed in the examples
- The prototypes of all your functions should be included in your header file called holberton.h
- Don't forget to push your header file
- All your header files should be include guarded
- Authorized functions and macros:
	- write (man 2 write)
	- malloc (man 3 malloc)
	- free (man 3 free)
	- va_start (man 3 va_start)
	- va_end (man 3 va_end)
	- va_copy (man 3 va_copy)
	- va_arg (man 3 va_arg)
- Note that we will not provide the *_putchar* function for this project

## Project Breakdown

| Task # | Type | Short description | File name and link |
| ---: | --- | --- | --- |
|0| **Mandatory**  |{::nomarkdown} <p>Write a script that runs a C file through the preprocessor and save the result into another file.</p> <ul><li>The C file name will be saved in the variable `$CFILE`</li><li>The output should be saved in the file `c`</li></ul> {:/}| File: [0-preprocessor](./0-preprocessor)
|1| **Mandatory**  |<p>Write a script that generates the assembly code of a C code and save it in an output file.</p> <ul><li>The C file name will be saved in the variable `$CFILE`</li><li>The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.</li></ul>| File: [1-compiler](./1-compiler)
|2| **Mandatory**  |<p>Write a script that compiles a C file but does not link.</p> <ul><li>The C file name will be saved in the variable `$CFILE`</li><li>The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.</li></ul>| File: [2-assembler](./2-assembler)
