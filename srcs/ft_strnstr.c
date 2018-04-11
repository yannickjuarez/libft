/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumont- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 23:57:20 by ydumont-          #+#    #+#             */
/*   Updated: 2017/11/08 00:15:12 by ydumont-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2len;

	s2len = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	while (n && *s1)
	{
		if (n < s2len)
			return (NULL);
		if (*s1 == *s2)
		{
			if (!ft_strncmp(s1, s2, s2len))
				return ((char *)s1);
		}
		s1++;
		n--;
	}
	return (NULL);
}
