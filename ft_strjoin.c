/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 19:14:35 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/04 19:23:44 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	z;
	char	*dst;

	if (s1 == '\0' || s2 == '\0')
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	dst = malloc(sizeof(char) * ((i + j) + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	z = 0;
	while (s1[i] != '\0')
		dst[z++] = s1[i++];
	j = 0;
	while (s2[j] != '\0')
		dst[z++] = s2[j++];
	dst[z] = '\0';
	return (dst);
}
