/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   score.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:54:21 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 12:33:25 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

int		total_score(t_info *all)
{
	int		x;
	int		y;
	int		total;

	y = -1;
	total = 0;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
			total += all->board[y][x].value;
	}
	return (total);
}
