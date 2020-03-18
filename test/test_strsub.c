
#include "libft.h"

int main()
{
	char *s = "Hello World";
	int n = 2;
	int d = 7;
	char *p;

	p = ft_strsub(s, n, d);
	printf("%s", p);
	return (0);
}
