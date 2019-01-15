/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 07:34:06 by yhetman           #+#    #+#             */
/*   Updated: 2018/11/01 07:34:09 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *tempo;

	tempo = lst;
	if (lst != NULL && f)
	{
		while (tempo)
		{
			f(tempo);
			tempo = tempo->next;
		}
	}
	return ;
}
