# C Library
**C programming** can be very tedious when one doesn’t have access to those highly useful standard functions.
This project contains **basic C** functions for use in future projects.

## How to use libft

This will be generate the static library called: **libft.a** library, with mandatory part functions.

```bash
cd 42-silicon-valley-libft
make all
```
Make bonus will add the bonus functions to the **libft.a** library, with bonus functions.
```bash
cd 42-silicon-valley-libft
make bonus
```

**To clean, use :**
```bash
make clean
make fclean
```

## Libc functions  | First Part

Functions for String manipulation and String examination.

||||
| ------------- | ------------- | ------------- |
| ft_strlcpy  | ft_isprint  | ft_strrchr  |
| ft_strlcat  | ft_toupper  | ft_strnstr  |
| ft_strchr  | ft_tolower  | ft_strlen  |
|  ft_strncmp |   |   |
| ft_memcpy  | ft_memcmp  | ft_memchr  |
| ft_memset  |  ft_memmove | ft_memccpy  |
| ft_isalpha  | ft_isdigit  | ft_isalnum  |
| ft_bzero  | ft_atoi  |   |

### Functions  using malloc

Functions for Memory manipulation.

||
| ------------- |
| ft_calloc  |
| ft_strdup  |

## Additional functions | Second Part

Funtions for Math Conversion

|||
| ------------- | ------------- |
| ft_substr  | ft_strmapi  |
| ft_strjoin  | ft_putchar_fd  |
| ft_strtrim  | ft_putstr_fd  |
| ft_split  | ft_putendl_fd  |
| ft_itoa  | ft_putnbr_fd  |

## Linklist functions | Bonus Part

Functions for  Linked List
|||
| ------------- | ------------- |
| ft_lstnew  | ft_lstadd_back  |
| ft_lstadd_front  | ft_lstdelone  |
| ft_lstsize  | ft_lstclear  |
| ft_lstlast  | ft_lstclear  |
| ft_lstmap  |   |

## Basic tests
```bash
cd 42-silicon-valley-libft/tests
```
```c
gcc test_lstnew.c ../ft_lstnew.c
./a.out
```

## Evaluated by moulinette

```diff 
+ success
+ 115/100
```

```diff 
+ initial_errors: | test_ft_atoi: OK | test_ft_bzero: OK | test_ft_calloc: OK | test_ft_isalnum: OK | test_ft_isalpha: OK | test_ft_isascii: OK  
+ | test_ft_isdigit: OK | test_ft_isprint: OK | test_ft_itoa: OK | test_ft_memccpy: OK | test_ft_memchr: OK | test_ft_memcmp: OK | 
+ test_ft_memcpy: OK | test_ft_memmove: OK | test_ft_memset: OK | test_ft_putchar_fd: OK | test_ft_putendl_fd: OK | test_ft_putnbr_fd: OK | 
+ test_ft_putstr_fd: OK | test_ft_split: OK | test_ft_strchr: OK | test_ft_strdup: OK | test_ft_strjoin: OK | test_ft_strlcat: OK | 
+ test_ft_strlcpy: OK | test_ft_strlen: OK | test_ft_strmapi: OK | test_ft_strncmp: OK | test_ft_strnstr: OK | test_ft_strrchr: OK | 
+ test_ft_strtrim: OK | test_ft_substr: OK | test_ft_tolower: OK | test_ft_toupper: OK | bonus: 9/9 functions correct
```

### Libft Pdf  new curriculum
[Download from HERE](https://drive.google.com/file/d/1wC4ZB7N0yKdO8TjjlvD5sz87vJdpkosF/view?usp=sharing)
 