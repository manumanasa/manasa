/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:36:09 by mputsala          #+#    #+#             */
/*   Updated: 2016/12/09 16:32:30 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int				i;
	int				j;
	unsigned char	*m;
	unsigned char	*n;

	i = 0;
	j = 0;
	m = (unsigned char *)s1;
	n = (unsigned char *)s2;
	while (m[i] != '\0')
		i++;
	while (n[j] != '\0')
	{
		m[i] = n[j];
		i++;
		j++;
	}
	m[i] = '\0';
	return ((char *)m);
}
