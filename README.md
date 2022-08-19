<h1>Simple_Shell Project</h1>

<h2>General-info</h2>

<p>A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts. The most generic sense of the term shell means any program that users employ to type commands. A shell hides the details of the underlying operating system and manages the technical details of the operating system's application programming interface, which is the level of the operating system that programs running on that operating system use.</p>

<h2>Requirements for this project</h2>

<h3>General</h3>

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to why?

<h2>Compilation and Testing</h2>

<h3>Compilation</h3>

<p>Your shell will be compiled this way:</p>

- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

<h3>Testing</h3>

<p>Your shell should work like this in interactive mode:</p>

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

<p>But also in non-interactive mode:</p>

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

<h2>Files of Shell</h2>

<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/AUTHORS">AUTHORS</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/README.md">README.md</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/_free_ptr.c">_free_ptr.c</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/fork_process.c">fork_process.c</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/get_env.c">get_env.c</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/main.c">main.c</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/main.h">main.h</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/man_1_simple_shell">man	1simple_shell</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/str_cat.c">str_cat.c</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/str_dup.c">str_dup.c</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/str_len.c">str_len.c</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/strn_cmp.c">strn_cmp.c</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/token_counter.c">token_counter.c</a>
<a href="https://github.com/miguel5219/holbertonschool-simple_shell/blob/master/tokenizer.c">tokenizer.c</a>

<h2>Collaboration</h2>

- <a href="https://github.com/TATTANRAM0X">Jhonatan Ramos</a> - 5202@holbertonstudents.com
- <a href="https://github.com/miguel5219">Luis Miguel Moreno</a> - 5219@holbertonstudents.com

<h3>For Holberton School</h3>


























