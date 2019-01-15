/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 07:41:42 by yhetman           #+#    #+#             */
/*   Updated: 2018/11/01 07:41:44 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tempo;

	if (!del || !alst || !*alst)
		return ;
	while (*alst)
	{
		tempo = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = tempo;
	}
	*alst = NULL;
	return ;
}
