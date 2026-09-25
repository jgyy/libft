#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **split, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	*next_word(char const *s, char c, size_t *i)
{
	size_t	start;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (ft_substr(s, start, *i - start));
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	nwords;
	size_t	i;
	size_t	pos;

	nwords = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (nwords + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < nwords)
	{
		result[i] = next_word(s, c, &pos);
		if (result[i] == NULL)
			return (free_split(result, i), NULL);
		i++;
	}
	result[i] = NULL;
	return (result);
}
