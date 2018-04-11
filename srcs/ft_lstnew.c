/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumont- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:38:27 by ydumont-          #+#    #+#             */
/*   Updated: 2017/11/08 13:43:42 by ydumont-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	if (!result)
		return (NULL);
	result->next = NULL;
	if (!content)
	{
		result->content = NULL;
		(*result).content_size = 0;
		return (result);
	}
	if (!(result->content = malloc(content_size)))
		return (NULL);
	ft_memcpy(result->content, content, content_size);
	result->content_size = content_size;
	return (result);
}
