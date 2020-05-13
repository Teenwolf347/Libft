/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:19:11 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/13 13:55:23 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *str, size_t size)
{
	size_t i;

	if (dst == NULL && str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)str)[i];
		i++;
	}
	return (dst);
}
