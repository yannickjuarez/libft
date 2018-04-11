/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumont- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:00:00 by ydumont-          #+#    #+#             */
/*   Updated: 2017/11/08 18:33:30 by ydumont-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*result;
	t_list	*newres;
	t_list	*newlst;

	if (!lst)
		return (NULL);
	newlst = lst;
	tmp = (*f)(newlst);
	if (!(newres = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	result = newres;
	newlst = newlst->next;
	while (newlst)
	{
		tmp = (*f)(newlst);
		newres->next = ft_lstnew(tmp->content, tmp->content_size);
		if (!newres->next)
			return (NULL);
		newres = newres->next;
		newlst = newlst->next;
	}
	return (result);
}
