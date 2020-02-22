
### To compile
```c
gcc ../ft_strncpy.c *.c -o a
gcc -Wall -Wextra -Werror ../ft_memchr.c ft_test_memchr.c -o a
```

### Check your formattion with norminette
```shell
norminette -CheckForbiddenSourceHeader
```

**memset**
memset() is used to fill a block of memory with a particular value.

void *memset(void *ptr, int x, size_t n);
- ptr ==> Starting address of memory to be filled
- x   ==> Value to be filled
- n   ==> Number of bytes to be filled starting from ptr to be filled

**bzero**
The bzero() function shall place n zero-valued bytes in the area pointed to by s.
void bzero(void *s, size_t n);

**memcpy**
memcpy() is used to copy a block of memory from a location to another. It is declared in string.h
// Copies "numBytes" bytes from address "from" to address "to"
void * memcpy(void *to, const void *from, size_t numBytes);

**memccpy**
Here memccpy function shall copy bytes from the memory area src into dest, stopping after the first occurrence of byte c, or after n bytes are copied, whichever comes first. Here character c is also copied.

**memmove**
memmove() is used to copy a block of memory from a location to another. It is declared in string.h
How is it different from memcpy()?
memcpy() simply copies data one by one from one location to another. On the other hand memmove() copies the data first to an intermediate buffer, then from buffer to destination.

**memchr**
memchr() searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.
void *memchr(const void *str, int c, size_t n)

**memcmp**
The C library function int memcmp(const void *str1, const void *str2, size_t n)) compares the first n bytes of memory area str1 and memory area str2.

**strlen**
The strlen() function calculates the length of a given string.The strlen() function is defined in string.h header file. It doesn’t count null character ‘\0’.

**strup**
This function returns a pointer to a null-terminated byte string, which is a duplicate of the string pointed to by s. The memory obtained is done dynamically using malloc and hence it can be freed using free().

**strcpy**
The strcpy() function is used to copy strings. It copies string pointed to by source into the destination. This function accepts two arguments of type pointer to char or array of characters and returns a pointer to the first string


