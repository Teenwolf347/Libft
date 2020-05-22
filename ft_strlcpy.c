/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 15:01:51 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/22 23:06:15 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	length;

	if (!dst || !src)
		return (0);
	n = ft_strlen(src);
	if (size != 0)
	{
		if (n >= size)
			length = size - 1;
		else
			length = n;
		ft_memcpy(dst, src, length);
		dst[length] = '\0';
	}
	return (n);
}
