#include "../libft.h"

int main(void)
{
    char *c;
    char *a;
    char *ptr;
    
	c = " Hola ";
    a = " ";
    ptr = ft_strtrim(c, a);
    printf("%s", ptr);

    return (0);
}