/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 18:53:19 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/13 14:21:30 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	if (!s)
		return (NULL);
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		i = 0;
		while (s[start + i] && i < len)
		{
			dst[i] = s[start + i];
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}
