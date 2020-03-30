
#include "../libft.h"

void test_striter_f(char s)
{
	printf("%c", s);
}

int main(void)
{
	char *c = "asdf";
	ft_striter(c, test_striter_f);
	return (0);
}
