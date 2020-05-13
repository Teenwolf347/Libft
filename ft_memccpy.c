/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:32:11 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/06 13:52:38 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *str, int v, size_t s)
{
	size_t		i;

	i = 0;
	while (i < s)
	{
		(((unsigned char *)dst)[i]) = (((unsigned char *)str)[i]);
		if ((((unsigned char *)dst)[i]) == (unsigned char)v)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
