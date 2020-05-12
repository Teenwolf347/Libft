/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tturnber <tturnber@MSK.21-SCHOOL.RU>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 12:55:03 by tturnber          #+#    #+#             */
/*   Updated: 2020/05/10 14:34:13 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*list_buf;

	if (lst == NULL || f == NULL || del == NULL)
		return (0);
	list_buf = ft_lstnew((*f)(lst->content));
	new_list = list_buf;
	list_buf = list_buf->next;
	lst = lst->next;
	while (lst != NULL)
	{
		list_buf = ft_lstnew((*f)(lst->content));
		if (list_buf == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, list_buf);
		lst = lst->next;
	}
	return (new_list);
}
