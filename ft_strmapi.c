/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 18:36:18 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/04 18:44:20 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	length;
	char	*dst;

	if (s == '\0' || !f)
		return (NULL);
	length = ft_strlen(s);
	dst = malloc(sizeof(char) * (length + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dst[i] = (*f)(i, (char)s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
