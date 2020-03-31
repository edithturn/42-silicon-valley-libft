
#include "../libft.h"

void test_striteri_f(unsigned int index, char *s)
{
	printf("%d", index);	
	write(1, s, 1);
	write(1, "\n", 1);
}

int main(void)
{
	char *c = "asdf";
	void (*f)(unsigned int, char *) = &test_striteri_f;
	ft_striteri(c, f);
	return (0);
}