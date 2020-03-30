
#include "../libft.h"

void *test_striter_f(char *s)
{
	printf("%s", s);
	return (NULL);
}

int main(void)
{
	char *c = "asdf";
	ft_striter(c, test_striter_f(c));
	return (0);
}
