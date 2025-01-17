#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	k = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[k]) && k >= i)
		k--;
	str = ft_substr(s1, i, k - i + 1);
	return (str);
}
