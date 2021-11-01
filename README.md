# *0x16. C - Simple Shell*
<br>
<br>
The gates of shell is a Holberton School project in the first trimester, helping student to understand the advanced concepts behind the shell program include process, system call, bit manipulation, file managment, error handling
<br>
*General*
<br>
Who designed and implemented the original Unix operating system
<br>
Who wrote the first version of the UNIX shell
<br>
Who invented the B programming language (the direct predecessor to the C programming language)
<br>
Who is Ken Thompson
<br>
How does a shell work
<br>
What is a pid and a ppid
<br>
How to manipulate the environment of the current process
<br>
What is the difference between a function and a system call
<br>
How to create processes
<br>
What are the three prototypes of main
<br>
How does the shell use the PATH to find the programs
<br>
How to execute another program with the execve system call
<br>
How to suspend the execution of a process until one of its children terminates
<br>
What is EOF / “end-of-file”?
<br>
<br>
*Output*
<br>
Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
<br>
The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)
<br>
Example of error with sh:
<br>
$ echo "qwerty" | /bin/sh
<br>
/bin/sh: 1: qwerty: not found
<br>
$ echo "qwerty" | /bin/../bin/sh
<br>
/bin/../bin/sh: 1: qwerty: not found
<br>
$
<br>
Same error with your program hsh:
<br>
$ echo "qwerty" | ./hsh
<br>./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
<br>
./././hsh: 1: qwerty: not found
<br>
$
<br>
<br>
*List of allowed functions and system calls*
<br>
access (man 2 access)
<br>
chdir (man 2 chdir)
<br>
close (man 2 close)
<br>
closedir (man 3 closedir)
<br>
execve (man 2 execve)
<br>
exit (man 3 exit)
<br>
_exit (man 2 _exit)
<br>
fflush (man 3 fflush)
<br>
fork (man 2 fork)
<br>
free (man 3 free)
<br>
getcwd (man 3 getcwd)
<br>
getline (man 3 getline)
<br>
getpid (man 2 getpid)
<br>
isatty (man 3 isatty)
<br>
kill (man 2 kill)
<br>
malloc (man 3 malloc)
<br>
open (man 2 open)
<br>
opendir (man 3 opendir)
<br>
perror (man 3 perror)
<br>
read (man 2 read)
<br>
readdir (man 3 readdir)
<br>
signal (man 2 signal)
<br>
stat (__xstat) (man 2 stat)
<br>
lstat (__lxstat) (man 2 lstat)
<br>
fstat (__fxstat) (man 2 fstat)
<br>
strtok (man 3 strtok)
<br>
wait (man 2 wait)
<br>
waitpid (man 2 waitpid)
<br>
wait3 (man 2 wait3)
<br>
wait4 (man 2 wait4)
<br>
write (man 2 write)
<br>
<br>
*Compilation*
<br>
Your shell will be compiled this way:
<br>
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
<br>
<br>
*Testing*
<br>
Your shell should work like this in interactive mode:
<br>
$ ./hsh
<br>
($) /bin/ls
<br>
hsh main.c shell.c
<br>
($)
<br>
($) exit
<br>
$
<br>
But also in non-interactive mode:
<br>
$ echo "/bin/ls" | ./hsh
<br>
hsh main.c shell.c test_ls_2
<br>
$
<br>
$ cat test_ls_2
<br>
/bin/ls
<br>
/bin/ls
<br>
$
<br>
$ cat test_ls_2 | ./hsh
<br>
hsh main.c shell.c test_ls_2
<br>
hsh main.c shell.c test_ls_2
<br>
$
<br>
<br>
*Checks*
<br>
The Checker will be released at the end of the project (1-2 days before the deadline). We strongly encourage the entire class to work together to create a suite of checks covering both regular tests and edge cases for each task. See task 8. Test suite.
<br>
<br>
*AUTHORS*
<br>
Nandweza Allan - allannadweza@gmail.com
<br>
Innocent Kalu - obinnasmartkalu@gmail.com