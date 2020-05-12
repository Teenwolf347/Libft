/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:52:06 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/03 13:57:38 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_strdup(const char *str)
{
	int		i;
	char	*dtr;

	i = 0;
	dtr = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dtr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dtr[i] = str[i];
		i++;
	}
	dtr[i] = '\0';
	return (dtr);
}
