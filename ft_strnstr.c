/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:07:35 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/01 13:27:32 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t s)
{
	size_t i;
	size_t j;
	size_t len;

	len = ft_strlen(s2);
	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < s)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0' && (i + j) < s)
			j++;
		if (j == len)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
