/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 13:53:26 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/05 16:40:49 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *str, size_t size)
{
	size_t	i;
	char	*dst;

	dst = (char *)str;
	i = 0;
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
}
