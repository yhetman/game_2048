/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:44:47 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 09:27:44 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

static void	init_colors(void)
{
	init_pair(COLOR_2, COLOR_BLACK, 225);
	init_pair(COLOR_4, COLOR_BLACK, 219);
	init_pair(COLOR_8, COLOR_BLACK, 213);
	init_pair(COLOR_16, COLOR_BLACK, 212);
	init_pair(COLOR_32, COLOR_BLACK, 211);
	init_pair(COLOR_64, COLOR_BLACK, 210);
	init_pair(COLOR_128, COLOR_BLACK, 205);
	init_pair(COLOR_256, COLOR_BLACK, 204);
	init_pair(COLOR_512, COLOR_BLACK, 200);
	init_pair(COLOR_1024, COLOR_BLACK, 199);
	init_pair(COLOR_2048, COLOR_BLACK, 198);
	init_pair(COLOR_4096, COLOR_BLACK, 161);
	init_pair(COLOR_8182, COLOR_BLACK, 197);
	init_pair(COLOR_16364, COLOR_BLACK, 196);
	init_pair(COLOR_BORDER, COLOR_WHITE, 96);
	init_pair(COLOR_MENU, COLOR_WHITE, 132);
}

static void	random_piece(t_piece board[BOARD_SIZE][BOARD_SIZE])
{
	int		i;
	int		x;
	int		y;

	srand(time(0));
	x = rand() % 4;
	y = rand() % 4;
	i = -1;
	while (++i < 2)
	{
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
}

static void	fill_numbers(t_info *all)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			all->board[y][x].value = 0;
			all->board[y][x].new_val = 0;
		}
	}
	random_piece(all->board);
}

void		initialization(t_info *all)
{
	int		i;

	i = 0;
	while ((int)ft_pow(2, i) != WIN_VALUE)
		i++;
	all->win = i;
	all->high_score = high_score();
	fill_numbers(all);
	drawing(all);
	init_colors();
}
