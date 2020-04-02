#include "../libft.h"

int main(void)
{
    char *c;
    char *a;
    char *ptr;
    char *tr;

    int q;
    int x;

    c = "";
    a = "";
    ptr = ft_strtrim(c);
    tr = ft_strtrim(a);
    printf("%s", ptr);
    printf("%s", tr);

    q = strcmp(ptr, c);
    x = strcmp(ptr, a);

    printf("%d", q);
    printf("%d", x);

    return (0);
}