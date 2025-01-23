#include "libft.h"

static int	malloc_words(char **array, int pos, size_t buffer)
{
	int	i;

	array[pos] = malloc(buffer);
	i = 0;
	if (array[pos] == NULL)
	{
		while (i < pos)
			free(array[i++]);
		free(array);
		return (1);
	}
	return (0);
}

static int	fill_array(char **array, char const *s, char c)
{
	size_t	words_len;
	int		i;

	i = 0;
	while (*s)
	{
		words_len = 0;
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			++words_len;
			++s;
		}
		if (words_len)
		{
			if (malloc_words(array, i, words_len + 1))
				return (1);
			ft_strlcpy(array[i], s - words_len, words_len + 1);
			i++;
		}
	}
	return (0);
}

static int	word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			++count;
			while (*s != c && *s)
				++s;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;

	count = word_count(s, c);
	array = (char **)malloc((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array[count] = NULL;
	if (fill_array(array, s, c))
		return (NULL);
	return (array);
}
