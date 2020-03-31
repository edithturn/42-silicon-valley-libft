
#include "../libft.h"

void test_striter_f(char *s)
{
	/*printf("%s", s);*/
	write(1, s, 1);
}

int main(void)
{
	char *c = "asdf";
	void (*f)(char *) = &test_striter_f;
	ft_striter(c, f);
	return (0);
}
