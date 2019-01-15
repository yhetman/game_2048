/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 04:31:56 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 07:50:52 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

static void		print_one_piece(int x, int y, t_info *all, int val)
{
	int		row;
	int		column;

	attron(COLOR_PAIR(ft_sqrt(val)));
	row = y * all->piece_length + 4;
	while (row < (y + 1) * all->piece_length + 3)
	{
		column = x * all->piece_width + 1;
		while (column < (x + 1) * all->piece_width)
		{
			mvaddch(row, column, ' ');
			column++;
		}
		row++;
	}
	attroff(COLOR_PAIR(val));
}

void			print_all_pieces(t_info *all)
{
	int		x;
	int		y;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (all->board[y][x].value != 0)
				print_one_piece(x, y, all, all->board[y][x].value);
		}
	}
}
