/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 13:35:40 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/11 12:09:33 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		sign_of_int(int *n, int *sign)
{
	if (*n < 0)
	{
		*n = *n * -1;
		*sign = 1;
	}
}

static	int		cmp(int n)
{
	int		tmp;
	int		len;

	tmp = n;
	len = 2;
	while (tmp /= 10)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	sign_of_int(&n, &sign);
	len = cmp(n);
	len = len + sign;
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
