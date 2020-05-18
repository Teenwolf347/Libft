/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:37:16 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/18 22:23:35 by student          ###   ########.fr       */
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
	if ((char)val == '\0')
		return ((void *)&str[i]);
	return (NULL);
}
