/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:37:16 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/13 14:52:25 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int val, size_t size)
{
	size_t i;

	i = 0;
	if (size > 0)
	{
		while (size--)
		{
			if (((unsigned char *)str)[i] == (unsigned char)val)
				return ((void *)&str[i]);
			i++;
		}
	}
	return (NULL);
}
