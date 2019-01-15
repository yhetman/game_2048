/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_generator.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 04:38:07 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 04:41:08 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

void	numbers_generator(t_piece board[BOARD_SIZE][BOARD_SIZE])
{
	int		x;
	int		y;

	x = rand() % 4;
	y = rand() % 4;
	while (board[y][x].value != 0)
	{
		x = rand() % 4;
		y = rand() % 4;
	}
	if (!(rand() % 10))
		board[y][x].value = 4;
	else
		board[y][x].value = 2;
}
