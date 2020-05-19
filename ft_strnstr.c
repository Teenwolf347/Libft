/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:07:35 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/19 17:08:55 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t s)
{
	size_t len;

	len = ft_strlen(s2);
	if (s2[0] == '\0')
		return ((char *)s1);
	while (*s1 != '\0' && len <= s)
	{
		s--;
		if (*s1 == *s2 && !ft_strncmp(s1, s2, len))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
