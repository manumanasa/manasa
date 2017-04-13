/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:52:15 by mputsala          #+#    #+#             */
/*   Updated: 2016/12/09 16:30:23 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*p;
	unsigned char	*o;

	i = 0;
	j = 0;
	p = (unsigned char *)s1;
	o = (unsigned char *)s2;
	while (p[i] != '\0')
		i++;
	while (j < n && o[j] != '\0')
	{
		p[i] = o[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return ((char *)p);
}
