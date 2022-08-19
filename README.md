***
![image](https://us.123rf.com/450wm/fad82/fad821710/fad82171000042/87527707-concepto-de-programaci%C3%B3n-y-codificaci%C3%B3n-programador-de-codificaci%C3%B3n-en-la-computadora-port%C3%A1til-.jpg)
***
# Simple Shell Project

Project by [Jhonatan Ramos](https://github.com/TATTANRAM0X) and [Luis Miguel Moreno](https://github.com/miguel5219)

In this project we were assigned to make a functional Shell, with its basic commands.

## Table of contents

1. [General info](#general-info)
2. [Requirements for this project](#requirements-for-this.project)
3. [Compilation and Testing](#compilation-and-testing)
4. [Files of shell](#files-of-shell)
5. [Collaboration](#collaboration)

## General info

```Simple Shell``` A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts. The most generic sense of the term shell means any program that users employ to type commands. A shell hides the details of the underlying operating system and manages the technical details of the operating system's application programming interface, which is the level of the operating system that programs running on that operating system use.

## Requirements

- Allowed editors: ```vi```, ```vim```, ```emacs```.
- All the files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```.
- All your files should end with a new line.
- A ```README.md``` file, at the root of the folder of the project is mandatory.
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks.
- No more than 5 functions per file.
- All your header files should be include guarded.
- Use system calls only when you need to why?

## Compilation and Testing

### Compilation

Your shell will be compiled this way:
~~~
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
~~~

### Testing

Your shell should work like this in interactive mode:

~~~
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
~~~

But also in non-interactive mode:

~~~
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
~~~

## Files of shell

| Files |
| ------------- |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/AUTHORS">AUTHORS</a> | 
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/README.md">README.md</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/_free_ptr.c">_free_ptr.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/fork_process.c">fork_process.c</a> | 
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/get_env.c">get_env.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/main.c">main.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/main.h">main.h</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/man_1_simple_shell">man_1_simple_shell</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/str_cat.c">str_cat.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/str_dup.c">str_dup.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/str_len.c">str_len.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/strn_cmp.c">strn_cmp.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/token_counter.c">token_counter.c</a> |
| <a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/tokenizer.c">tokenizer.c</a> |

## Collaboration

[Jhonatan Ramos](https://github.com/TATTANRAM0X)  5202@holbertonstudents.com 

[Luis Miguel Moreno](https://github.com/miguel5219)  5219@holbertonstudents.com 
***
## For
![image](https://apply.holbertonschool.com/holberton-logo.png)

***
