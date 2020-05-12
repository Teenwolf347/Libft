/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 14:44:09 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/08 15:14:11 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	z;
	char	*dst;

	i = 0;
	if (!(s1))
		return (NULL);
	while (s1[i] != '\0')
		i++;
	while (ft_set(s1[i], set) || s1[i] == '\0')
		i--;
	j = 0;
	while (ft_set(s1[j], set))
		j++;
	if ((s1 + i) < (s1 + j))
		return (ft_calloc(1, sizeof(char)));
	dst = malloc(sizeof(char) * ((i - j) + 2));
	if (dst == NULL)
		return (NULL);
	z = 0;
	while (j <= i)
		dst[z++] = s1[j++];
	dst[z] = '\0';
	return (dst);
}
