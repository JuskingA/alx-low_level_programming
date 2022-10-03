
 <h1 style="position: absolute; color: white; bottom: 15px; transform: translate(-50%, 0); left: 50%"> Alx low level programming</h1>

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?color=1AF761&lines=0x00-hello_world+%7C%7C+0x01-variables_if_else_while+%7C%7C+C+0x02-functions_nested_loopse+0x03-debugging;0x04-more_functions_nested_loops+%7C%7C+0x05-pointers_arrays_strings+%7C%7C+0x06-pointers_arrays_strings+%7C%7C++0x07-pointers_arrays_strings;0x08-recursion+and+many+more;Never+Stop+Learning!&center=true&width=800&height=45" alt="README">
</p># Synopsis

Creating a Dynamic library with the following functions

+ _putchar - writes the character c to stdout
+ _isupper - Checks if a letter is upper case
+ _memset - fill memory with a constant byte
+ _strcat - Concatenates two stings
+ _isdigit - checks for a digit (0 through 9)
+ _memcpy - copy memory area
+ _strncat - Concatenates two stings
+ _strchr - returns a pointer to the first occurrence of the character c in the string s.
+ _strlen - Calculates the length of a string
+ _strncpy - Copies a string up to an n byte
+ _islower - checks for lowercase character
+ _puts - prints a string
+ _strcmp - compares two strings
+ _strspn - search a string for a set of bytes
+ _isalpha - checks for lowercase or uppercase characters
+ _strpbrk - search a string for any of a set of bytes
+ _strstr - locate a substring
+ _abs - computes the absolute value of an integer.
+ _strcpy - create a copy of a string
+ _atoi - Converts numbers in a string to integers

# Usage

+ cp -r c_files/* .
+ ./1-create_dynamic_lib.sh
+ rm *.c *.o
+ To be able to use this library on your code, simply, include "main.h"
on your file set the LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH and then compile your
code normally.

