/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:55:36 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/21 16:49:11 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (dst);
	if ((unsigned char *)src < (unsigned char *)dst)
		while (len)
		{
			len--;
			*(((unsigned char *)dst) + len) = *(((unsigned char *)src) + len);
		}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
