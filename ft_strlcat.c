/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 17:30:18 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/22 22:47:56 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t length;

	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	i = 0;
	while (dst[i] && i < size)
		i++;
	length = i;
	while (src[i - length] && i < size - 1)
	{
		dst[i] = src[i - length];
		i++;
	}
	if (length < size)
		dst[i] = '\0';
	return (length + ft_strlen(src));
}
