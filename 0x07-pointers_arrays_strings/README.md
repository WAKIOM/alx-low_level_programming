#ALX LOW LEVEL PROGRAMMING
#REQUIREMENTS
+ Allowed editors: vi, vim, emacs
+ All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+ All your files should end with a new line
+ Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
+ You are not allowed to use global variables
+ No more than 5 functions per file
+ You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
+ You are allowed to use `_putchar`
+ The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called main.h
* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File         | Prototype                                               |
| ------------ | ------------------------------------------------------- |
| `0-memset.c` | `char *_memset(char *s, char b, unsigned int n);`       |
| `1-memcpy.c` | `char *_memcpy(char *dest, char *src, unsigned int n);` |
| `2-strchr.c` | `char *_strchr(char *s, char c);`                       |
| `3-strspn.c` | `unsigned int _strspn(char *s, char *accept);`          |
| `4-strpbrk.c` | `char *_strpbrk(char *s, char *accept);`               |
| `5-strstr.c` | `char *_strstr(char *haystack, char *needle);`          |
| `7-print_chessboard.c` | `void print_chessboard(char (*a)[8]);`        |
| `8-print_diagsums.c` | `void print_diagsums(int *a, int size);`        |
| `9-set_string.c` | `void set_string(char **s, char *to);`              |


- `0-memset.c`	 Write a function that fills memory with a constant byte.
	The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
	Returns a pointer to the memory area s
- `1-memcpy.c`	Write a function that copies memory area.
	The _memcpy() function copies n bytes from memory area src to memory area dest
	Returns a pointer to dest
- `2-strchr.c`	Write a function that locates a character in a string.
	Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
- `3-strspn.c`   Write a function that gets the length of a prefix substring.
	Returns the number of bytes in the initial segment of s which consist only of bytes from accept	
- `4-strpbrk.c`	Write a function that searches a string for any of a set of bytes.
	Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
- `5-strstr.c`	Write a function that locates a substring.
	Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
- `7-print_chessboard.c`	Write a function that prints the chessboard.
- `8-print_diagsums.c`	Write a function that prints the sum of the two diagonals of a square matrix of integers.
	You are allowed to use the standard library
- `9-set_string.c`	Write a function that sets the value of a pointer to a char.
