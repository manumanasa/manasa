/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 17:24:00 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/13 11:06:58 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		words(char const *s, char c)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			k++;
		i++;
	}
	if (s[0] != '\0')
		k++;
	return (k);
}

static	char	*ft_word(char const *s, char c, int *i)
{
	char	*str;
	int		k;

	k = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)));
	if (str == NULL)
		return (NULL);
	while (s[*i] != c && s[*i] != '\0')
	{
		str[k] = s[*i];
		k++;
		*i += 1;
	}
	str[k] = '\0';
	while (s[*i] == c && s[*i] != '\0')
		*i += 1;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		count;
	int		k;
	char	**str;

	i = 0;
	count = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	count = words(s, c);
	str = (char **)malloc(sizeof(str) * (count + 2));
	if (str == NULL)
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (k < count && s[i] != '\0')
	{
		str[k] = ft_word(s, c, &i);
		k++;
	}
	str[k] = NULL;
	return (str);
}
