#ALX LOW LEVEL PRGRAMMING
#REQUIREMENTS
+ Allowed editors: vi, vim, emacs
+ All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+ All your files should end with a new line
+ A README.md file, at the root of the folder of the project is mandatory
+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
+ You are not allowed to use global variables
+ No more than 5 functions per file
+ You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
+ You are allowed to use _putchar
+ You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
+ In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
+ The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
 * [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                 | Prototype                                                      |
| -------------------- | -------------------------------------------------------------- |
| `0-strcat.c`         | `char *_strcat(char *dest, char *src);`                        |
| `1-strncat.c`        | `char *_strncat(char *dest, char *src, int n);`                |
| `2-strncpy.c`        | `char *_strncpy(char *dest, char *src, int n);`                |
| `3-strcmp.c`         | `int _strcmp(char *s1, char *s2);`                             |
| `4-rev_array.c`      | `void reverse_array(int *a, int n);`                           |
| `5-string_toupper.c` | `char *string_toupper(char *);`                                |
| `6-cap_string.c`     | `char *cap_string(char *);`                                    |
| `7-leet.c`           | `char *leet(char *);`                                          |
| `8-rot13.c`          | `char *rot13(char *);`                                         |
| `100-print_number.c` | `void print_number(int n);`                                    |
| `102-infinite_add.c` | `char *infinite_add(char *n1, char *n2, char *r, int size_r);` |
| `103-print_buffer.c` | `void print_buffer(char *b, int size);`                        |

`FILE`			`DESCRIPTION`
1. `0-strcat.c` 	 a function that concatenates two strings.Prototype defined.
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
- Returns a pointer to the resulting string dest
2.  `1-strncat.c` Write a function that concatenates two strings.
- Return a pointer to the resulting string dest
3.  `2-strncpy.c` Write a function that copies a string. Your function should work exactly like strncpy
4.   `3-strcmp.c` Write a function that compares two strings. Should work exactly like strcmp
5.   `4-rev_array.c`  Write a function that reverses the content of an array of integers.
6.   `5-string_toupper.c` Write a function that changes all lowercase letters of a string to uppercase.
7.   `6-cap_string.c` Write a function that capitalizes all words of a string. Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
8.   `7-leet.c` Write a function that encodes a string into 1337.

- Letters a and A should be replaced by 4
- Letters e and E should be replaced by 3
- Letters o and O should be replaced by 0
- Letters t and T should be replaced by 7
- Letters l and L should be replaced by 1
- You can only use one if in your code
- You can only use two loops in your code
- You are not allowed to use switch
- You are not allowed to use any ternary operation
9.   `8-rot13.c`   Write a function that encodes a string using rot13.
- You can only use if statement once in your code
- You can only use two loops in your code
- You are not allowed to use switch
- You are not allowed to use any ternary operatio
10.   `100-print_number.c`  Write a function that prints an integer.
- You can only use _putchar function to print
- You are not allowed to use long
- You are not allowed to use arrays or pointers
- You are not allowed to hard-code special values



