/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 16:41:30 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/07 17:37:00 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (s)
	{
		i = 0;
		while (s[i] && ft_isspace(s[i]))
			i++;
		j = ft_strlen(s) - 1;
		while (s[i] && ft_isspace(s[j]))
			j--;
		str = ft_strsub(s, i, j - i + 1);
		return (str);
	}
	return (0);
}
