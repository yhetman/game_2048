/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 04:23:45 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 05:12:18 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_sqrt(int number)
{
	int		root;

	root = 0;
	while (ft_pow(2, root) < number)
		root++;
	return (root);
}
