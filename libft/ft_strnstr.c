/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 11:54:02 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/11 13:08:16 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t n)
{
	char	*cpy;
	char	*buf;
	size_t	length;

	buf = (char *)(big + n);
	length = ft_strlen(little);
	cpy = (char *)big;
	if (!length)
		return ((char *)big);
	while ((cpy = ft_strchr(cpy, *little)) && cpy <= buf)
	{
		if ((cpy + length <= buf) && !ft_strncmp(cpy, little, length))
			return (cpy);
		cpy++;
	}
	return (NULL);
}
