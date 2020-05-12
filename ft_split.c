/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 17:20:32 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/08 17:59:42 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	size_t	i;
	int		count_words;

	i = 0;
	count_words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			count_words++;
		}
	}
	return (count_words);
}

static int	ft_word_l(const char *s, char c)
{
	size_t	i;
	int		length;

	length = 0;
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

char		**ft_split(char const *s, char c)
{
	int		count_words;
	size_t	i;
	char	**words;

	if (s == '\0')
		return (NULL);
	count_words = ft_count_words((const char *)s, c);
	words = (char **)malloc(sizeof(char *) * (count_words + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (count_words != 0)
	{
		while (*s == c && *s != '\0')
			s++;
		words[i] = ft_substr((const char *)s, 0, ft_word_l((const char *)s, c));
		if (words[i] == NULL)
			return (NULL);
		s += ft_word_l(s, c);
		i++;
		count_words--;
	}
	words[i] = NULL;
	return (words);
}
