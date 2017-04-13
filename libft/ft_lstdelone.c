/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mputsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 15:17:43 by mputsala          #+#    #+#             */
/*   Updated: 2017/01/07 15:51:40 by mputsala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alist, void (*del)(void *, size_t))
{
	del(((*alist)->content), (*alist)->content_size);
	free(*alist);
	*alist = NULL;
}
