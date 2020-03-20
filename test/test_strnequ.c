
#include "../libft.h"

int main(void)
{
	char *s1 = "asdf";
    char *s2 = "asdf";
    int n = 3;

	printf("%d\n", ft_strnequ(s1, s2, n));
	return 0;
}