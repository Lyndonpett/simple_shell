# Simple Shell

The simple shell project is for [Holberton](https://www.holbertonschool.com/) students that are ending the first semester. It helps to explore, underestand and create a functional basic shell program. We include all that we learned througth the semester.

# Installation

If you want to use and test out the simple shell we have created, you can do so by just doing a Git Clone of our reposonitory:

```bash
git clone https://github.com/Lyndonpett/simple_shell
```

To compile use:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

You can then run shell with:

```bash
./hsh
```

# Example Output
## Interactive Mode
```bash
vagrant@vagrant-ubuntu64:~/simple_shell$ ./hsh
$
$ ls
AUTHORS      builtins.c  func_finder.c  path.c     realloc_function.c  shell.h           str_functions.c
builtins2.c  dir.c       hsh            README.md  shell.c             str_functions2.c  strtok_func.c
$
```
## Non-interactive Mode
```bash
vagrant@vagrant-ubuntu64:~/simple_shell$ echo "/bin/ls" | ./hsh
AUTHORS      builtins.c  func_finder.c  path.c     realloc_function.c  shell.h           str_functions.c
builtins2.c  dir.c       hsh            README.md  shell.c             str_functions2.c  strtok_func.c
vagrant@vagrant-ubuntu64:~/simple_shell$
```
# Builtins

We currently have two builtins in the shell, below is a description of each.

* `env` - The env command is a command that tells the shell program to display all of the environment variables with their values. It is a way to access those values through the shell.
* `exit` - If you want to exit the shell, simply run `exit` in the shell.

# Exiting without `exit`

To exit out of a command or process the user can use `ctrl+c`. `Ctrl+C` stops a process and causes it to abort. The user can also utilize the command `ctrl+d` which will just exit. When the command `ctrl+d` is used an exit status of 0 is given. Using exit, you can input its exit status or it is defaulted to the status of the last command executed.

# Files & Functions

* `.clang-format` - format for vscode betty documentation.
* `AUTHORS` - contains the authors of the project.
* `builtins.c` - builtins for the shell.
	* `exit` - exits the shell.
	* `sh_env` - prints the ENV within the shell.
* `builtins2.c` - more builtins, currently WIP.
* `dir.c` - functions for being able to traverse through the environment to find a certain function.
	* `dir` - tranverses the env and tries to match an `argv[0]` to something in the path.
	* `exe_maker` - converts the path into an executable.
	* `executor` - executes the arguments and runs them.
* `func_finder.c` - tries to match the arguments to our builtin functions.
	* `func_finder` - the function containing the structure to find builtins.
* `str_functions.c` - string functions needed to help other functions run.
	* `_strdup` - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
	* `concat_all` - concats 3 strings in a newly allocated memory.
	* `_strlen` - gets the length of a string.
	* `_putchar` - puts a char.
* `str_functions.c` - even more string functions needed to help other functions.
	* `_puts` - prints a string.
	* `_strcmp` - compares two strings.
	* `_everything_free` - frees our path tokens by free everything in the array.
	* `_strcat` - concats 2 strings and mallocs space for them.
* `strtok_func.c` - uses string tok to tokenize our input string.
	* `tokenizer` - tokenizes a string.
* `path.c` - functions to get the enviornment and parse it.
	* `_getenv` - gets the current env.
	* `env_tokenizer` - parses the env, so that the arguments can be tested against it.
* `shell.h` - contains all of the prototypes and structures for our functions.
* `shell.c` - where all the functions come into play, essentially the main file.
	* `main` - uses all previous functions within an infinite loop to create the simple shell.
* `man_1_simple_shell` - The man page containing general information about the hsh and the functionality.

# Bugs

Please report any bugs you find in this project. Currently, we have not tested all edge cases, but ones given to us should be handled.
# Authors

* Lyndon Pettersson: [GitHub](https://github.com/Lyndonpett)
* Tommy Kim: [Github](https://github.com/1107tomkim)

### Additional Contributors

* Special thanks to our studors, Garrison and Peyton, for helping with debugging and ideas.
* Thanks to Tyler Mcclure, Nikki Ford, Tres Serio, and Nick Wallace for working together as a team to overcome this project.
