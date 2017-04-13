/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 09:49:22 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/12 10:52:21 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	i = 0;
	j = 0;
	k = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s = malloc(i + j + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	ft_strcpy(s, s1);
	ft_strcat(s, s2);
	return (s);
}
