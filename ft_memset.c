/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 13:15:58 by tturnber          #+#    #+#             */
/*   Updated: 2020/04/30 13:47:43 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int val, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)str)[i] = (unsigned char)val;
		i++;
	}
	return (str);
}
