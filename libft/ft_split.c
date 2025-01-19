#include "libft.h"

static int	malloc_words(char **array, int position, size_t buffer)
{
	int	i;

	array[position] = malloc(buffer);
	i = 0;
	if (array[position] == NULL)
	{
		while (i < position)
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

static int	f_words_count(char const *s, char c)
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
	int		v_words_count;

	v_words_count = f_words_count(s, c);
	array = (char **)malloc((v_words_count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array[v_words_count] = NULL;
	if (fill_array(array, s, c))
	{
		free(array);
		return (NULL);
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[100] = " AB CD E F";
	char	**array;
	array = ft_split(str, ' ');
	if (!array)
		return (1);
	int i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		free(array[i]);
		i++;
	}
	free(array);
}
*/
