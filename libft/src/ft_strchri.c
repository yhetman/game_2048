/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 21:47:06 by yhetman           #+#    #+#             */
/*   Updated: 2018/12/29 21:03:37 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchri(char *str, int ch, int i)
{
	while (str[++i])
		if (str[i] == ch)
			return (i);
	return (-1);
}

int	ft_strchri_lu(char *str, int ch, int i)
{
	i = -1;
	while (str[++i])
		if (str[i] == ch || str[i] == ch + 32)
			return (i);
	return (-1);
}
