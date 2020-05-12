/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:54:32 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/06 15:42:27 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t s)
{
	size_t i;

	i = 0;
	if (s == 0)
		return (0);
	while ((unsigned char)str1[i] == (unsigned char)str2[i]
			&& str1[i] != '\0' && s > 1)
	{
		i++;
		s--;
	}
	if ((unsigned char)str1[i] == (unsigned char)str2[i])
		return (0);
	else
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
