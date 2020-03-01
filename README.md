# libft
The **libft** project builds a **C library** of elementals function that we could use in out future projects. Definitions and prototypes of covered functions at the end of the page.

### To compile
```
Example
gcc -Wall -Wextra -Werror ../ft_memset.c ft_test_memset.c -o ft_memset.c
```

### Check formattion with norminette
```
norminette -R CheckForbiddenSourceHeader ft_memset.c
```

### To validate
```
Testing suite for 42's libft project
* https://github.com/alelievr/libft-unit-test

Review libft in MockMoulinette
* https://moulibft.com/

General Revision libft project
* https://github.com/jgigault/42FileChecker
```

## Definitions and prototypes

**1. memset**
```c
void *ft_memset(void *b, int c, size_t len);
```
The ft_memset() function writes len bytes of value c (converted to an unsigned char) to the string b.

**2. bzero**
```c
void ft_bzero(void *s, size_t n);
```
The ft_bzero function Writes zeroes to a byte string.

**3. memcpy**
```c
void *memcpy(void *restrict dst, const void *restrict src, size_t n);
```
The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined. Applications in which dst and src might overlap should use memmove(3) instead.

**4. memccpy**
```c
void * memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
```
The memccpy() function copies bytes from string src to string dst.  If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dst is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.

**5. memmove**
```c
void * memmove(void *dst, const void *src, size_t len);
```
The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.


**6. memchr**
```c
void *memchr(const void *str, int c, size_t n)
```
memchr() searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.

**7. memcmp**
```c
int memcmp(const void *s1, const void *s2, size_t n);
```
The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.

**8. strlen**
```c
size_t strlen(const char *s);
```
The strlen() function calculates the length of a given string.The strlen() function is defined in string.h header file. It doesn’t count null character ‘\0’.

**9. strdup**
```c
char *strdup(const char *s1);
```
The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.

**10. strcpy**
```c
char * strcpy(char * dst, const char * src);
```
The strcpy() functions copy the string src to dst (including the terminating `\0' character.)

**11. strcat**
```c
char * strncat(char *restrict s1, const char *restrict s2, size_t n);
```
The strcat() functions append a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a termi-nating `\0'.

**12. strncpy**
```c
char * stpncpy(char * dst, const char * src, size_t len);
```
The stpcpy() and strcpy() functions copy the string src to dst (including the terminating `\0' character.)

**strrchr**
The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'

