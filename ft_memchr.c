/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:37:16 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/21 16:50:46 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	if (n > 0)
	{
		while (n--)
		{
			if (((unsigned char *)s)[i] == (unsigned char)c)
				return ((void *)&s[i]);
			i++;
		}
	}
	if ((char)c == '\0')
		return ((void *)&s[i]);
	return (NULL);
}
