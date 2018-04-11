/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumont- <ydumont-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 00:40:15 by ydumont-          #+#    #+#             */
/*   Updated: 2017/11/08 13:36:18 by ydumont-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*tmp;

	tmp = s1;
	if (!n)
		return (s1);
	if (s1 <= s2 || (unsigned char *)s1 > ((unsigned char *)s2 + n))
		return (ft_memcpy(s1, s2, n));
	else
	{
		s1 = (unsigned char *)s1 + n - 1;
		s2 = (unsigned char *)s2 + n - 1;
		while (n--)
			*(unsigned char *)s1-- = *(unsigned char *)s2--;
	}
	return (tmp);
}
