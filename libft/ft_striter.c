/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 15:45:27 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/09 16:17:17 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s == NULL || f == NULL)
		return ;
	while (*s && s != NULL)
		f(s++);
}
