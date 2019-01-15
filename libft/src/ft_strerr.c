/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:36:40 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/12 21:35:56 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

int		ft_strerr(char *str)
{
	return (ft_putstr_fd(str, 2));
}