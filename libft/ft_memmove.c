#include "libft.h"

void	*ft_memmove(void *dest, const void *srce, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	if (!dest || !srce)
		return (NULL);
	dst = (unsigned char *)dest;
	src = (unsigned char *)srce;
	if (src < dst)
	{
		i = n;
		while (i-- > 0)
			dst[i] = src[i];
	}
	else
	{
		i = -1;
		while (i++ < n)
			dst[i] = src[i];
	}
	return (dest);
}
