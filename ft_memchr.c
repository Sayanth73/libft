#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t 			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		i++;
	}
	return (NULL);
}
