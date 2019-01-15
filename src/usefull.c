/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:18:36 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/15 11:18:39 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

int		victory_pruffs(t_info *all)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (all->board[y][x].value == ft_pow(2, all->win))
				return (1);
		}
	}
	return (0);
}
