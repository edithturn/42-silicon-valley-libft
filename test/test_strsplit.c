#include "../libft.h"

int main(void)
{
	char *s =  "*hello*fellow***students*";
	char c = '*';
	char **ptr;
	int i;

	i = 0;
	ptr  = ft_strsplit(s, c);
	while(ptr[i] != '\0')
	{
		printf("%s", ptr[i]);
		printf("%s", ", ");
		i++;
	}
	return (0);
}