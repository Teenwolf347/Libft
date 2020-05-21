/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 17:07:09 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/21 16:57:48 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	int			size;
	char		v;

	size = 0;
	v = (char)c;
	while (s[size] != '\0')
	{
		if (s[size] == v)
			return (&((char *)s)[size]);
		size++;
	}
	if (s[size] == v)
		return (&((char *)s)[size]);
	return (NULL);
}
