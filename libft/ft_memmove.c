/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:41:06 by mputsala          #+#    #+#             */
/*   Updated: 2016/12/14 18:24:15 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s2;
	char		*s1;

	if (dst == NULL && src == NULL)
		return (NULL);
	s2 = src;
	s1 = dst;
	if (s1 > s2)
	{
		i = len;
		while (i > 0)
		{
			s1[i - 1] = s2[i - 1];
			i--;
		}
	}
	else if (s1 < s2)
		ft_memcpy(s1, s2, len);
	return (s1);
}
