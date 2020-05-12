/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 18:21:19 by tturnber          #+#    #+#             */
/*   Updated: 2020/04/30 18:34:46 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int val)
{
	size_t size;

	size = 0;
	while (str[size] != '\0')
		size++;
	while (size + 1 > 0)
	{
		if (str[size] == (char)val)
			return ((char *)str + size);
		size--;
	}
	return (NULL);
}
