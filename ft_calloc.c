#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	return (ft_memalloc(nmemb * size));
}