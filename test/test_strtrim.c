#include "../libft.h"

int main(void)
{
    char *c;
    char *ptr;
    c = " Hello World    ";
    ptr = ft_strtrim(c);
    printf("%s", ptr);
    return (0);
}