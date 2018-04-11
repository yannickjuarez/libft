/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumont- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 23:57:20 by ydumont-          #+#    #+#             */
/*   Updated: 2017/11/08 20:52:06 by ydumont-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;
	int		good;

	if (!ft_strlen(s2))
		return ((char *)s1);
	i = -1;
	good = 0;
	while (*(s1 + ++i) && !good)
	{
		if (*(s1 + i) == *(s2 + 0))
		{
			j = 0;
			k = i;
			good = 1;
			while (*(s2 + j))
				if (*(s2 + j++) != *(s1 + k++))
					good = 0;
			if (good)
				return ((char *)s1 + i);
		}
	}
	return (NULL);
}
