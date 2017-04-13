/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:26:56 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/07 18:00:48 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	while (*s != '\0')
		s++;
	if (c == '\0')
		return ((char *)s);
	s--;
	while (i <= len)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		else
		{
			s--;
			i++;
		}
	}
	return (0);
}
