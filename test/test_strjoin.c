#include "../libft.h"

int main()
{
	char *s1 = "Hello";
	char *s2 = "Mundo";
    char *j;

	j = ft_strjoin(s1, s2);
	printf("%s\n", j);	
	return (0);
}
