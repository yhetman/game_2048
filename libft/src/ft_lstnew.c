/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 19:09:00 by yhetman           #+#    #+#             */
/*   Updated: 2018/10/28 19:09:02 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*element;

	if (!(element = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		element->content = NULL;
		element->content_size = 0;
		element->next = NULL;
	}
	else
	{
		if (!(element->content = malloc(content_size)))
			return (NULL);
		element->content = ft_memcpy(element->content,
			content, content_size);
		element->content_size = content_size;
		element->next = NULL;
	}
	return (element);
}
