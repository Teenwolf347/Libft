/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 17:07:09 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/06 14:39:10 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *str, int val)
{
	int			size;
	char		v;

	size = 0;
	v = (char)val;
	while (str[size] != '\0')
	{
		if (str[size] == v)
			return (&((char *)str)[size]);
		size++;
	}
	if (str[size] == v)
		return (&((char *)str)[size]);
	return (NULL);
}
