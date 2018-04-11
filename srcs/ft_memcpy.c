/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumont- <ydumont-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 00:52:37 by ydumont-          #+#    #+#             */
/*   Updated: 2017/11/08 17:59:14 by ydumont-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	void	*tmp;

	tmp = s1;
	while (n--)
		*(unsigned char *)s1++ = *(unsigned char *)s2++;
	return (tmp);
}
