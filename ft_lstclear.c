/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:54:10 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/09 18:04:14 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *buf;

	while (*lst != NULL)
	{
		buf = *lst;
		(*del)(buf->content);
		*lst = (*lst)->next;
		free(buf);
	}
	lst = NULL;
}
