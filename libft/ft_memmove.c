#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n;
		while (i-- > 0)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		i = -1;
		while (++i < n)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return (dest);
}
