/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:55:36 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/06 14:16:11 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *str, size_t size)
{
	if ((unsigned char *)str < (unsigned char *)dst)
		while (size)
		{
			size--;
			*(((unsigned char *)dst) + size) = *(((unsigned char *)str) + size);
		}
	else
		ft_memcpy(dst, str, size);
	return (dst);
}
