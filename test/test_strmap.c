#include "../libft.h"

int main()
{
	char str = 'c';
	int n = 1;
    char *r;

	r = ft_strmapi(str, ft_strdup(str));
	printf("%s\n", r);
	return (0);
}
