/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 18:21:19 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/21 16:58:50 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t size;

	size = 0;
	while (s[size] != '\0')
		size++;
	while (size + 1 > 0)
	{
		if (s[size] == (char)c)
			return ((char *)s + size);
		size--;
	}
	return (NULL);
}
