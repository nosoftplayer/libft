#include "libft.h"
#include <stddef.h>

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	size_t	i;
	char	*dest;

	s_len = ft_strlen(s);
	dest = (char *)malloc((s_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
