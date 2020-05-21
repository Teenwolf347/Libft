/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 17:30:18 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/21 16:56:38 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t n;
	size_t i;
	size_t j;
	size_t length;

	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	length = i - dst[i];
	n = size - length;
	j = 0;
	while (src[j] != '\0')
	{
		if (i < size - 1)
			dst[i++] = src[j];
		j++;
	}
	dst[i] = '\0';
	return (length + (j - src[j]));
}
