#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = ft_strlen(s);
	write(fd, s, i);
	i++;
	write(fd, "\n", 1);
}
