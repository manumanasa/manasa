/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:18:16 by mputsala          #+#    #+#             */
/*   Updated: 2016/12/09 16:31:22 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*o;

	i = 0;
	p = (unsigned char *)s1;
	o = (unsigned char *)s2;
	while (i < n)
	{
		if (p[i] == o[i])
		{
			i++;
		}
		else
		{
			if (p[i] > p[i])
				return (p[i] - o[i]);
			else
				return (p[i] - o[i]);
		}
	}
	return (0);
}
