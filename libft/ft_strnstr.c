#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			k;
	size_t			little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		k = 0;
		while (big[i + k] == little[k] && i + k < len)
		{
			if (i + k == little_len)
				return ((char *)big + i);
			i++;
		}
		k++;
	}
	return (NULL);
}
