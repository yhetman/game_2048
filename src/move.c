/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:53:05 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 10:22:15 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

static void		move_up(t_piece board[BOARD_SIZE][BOARD_SIZE], t_info *a)
{
	int		x;
	int		y;

	x = -1;
	a->c = 'u';
	while (++x < 4)
	{
		y = 0;
		while (y < 4)
		{
			putting(a, board, &x, &y);
			redrawing(a);
			while (y > 0 && board[y - 1][x].value == board[y][x].value
			&& board[y][x].value != 0 && !board[y][x].new_val
			&& !board[y - 1][x].new_val)
			{
				filling(board, x, y, a->c);
				a->move = 1;
				y--;
			}
			putting(a, board, &x, &y);
			y++;
		}
	}
}

static void		move_down(t_piece board[BOARD_SIZE][BOARD_SIZE], t_info *a)
{
	int		x;
	int		y;

	x = -1;
	a->c = 'd';
	while (++x < 4)
	{
		y = 3;
		while (y >= 0)
		{
			putting(a, board, &x, &y);
			redrawing(a);
			while (y < 3 && board[y + 1][x].value == board[y][x].value
				&& board[y][x].value != 0 && board[y][x].new_val == 0
				&& !board[y + 1][x].new_val)
			{
				filling(board, x, y, a->c);
				a->move = 1;
				y++;
			}
			putting(a, board, &x, &y);
			y--;
		}
	}
}

static void		move_left(t_piece board[BOARD_SIZE][BOARD_SIZE], t_info *a)
{
	int		x;
	int		y;

	y = -1;
	a->c = 'l';
	while (++y < 4)
	{
		x = 0;
		while (x < 4)
		{
			putting(a, board, &x, &y);
			redrawing(a);
			while (x > 0 && board[y][x - 1].value == board[y][x].value
				&& board[y][x].value != 0 && board[y][x].new_val == 0
				&& !board[y][x - 1].new_val)
			{
				filling(board, x, y, a->c);
				a->move = 1;
				x--;
			}
			putting(a, board, &x, &y);
			x++;
		}
	}
}

static void		move_right(t_piece board[BOARD_SIZE][BOARD_SIZE], t_info *a)
{
	int		x;
	int		y;

	y = -1;
	a->c = 'r';
	while (++y < 4)
	{
		x = 3;
		while (x >= 0)
		{
			putting(a, board, &x, &y);
			redrawing(a);
			while (x < 3 && board[y][x + 1].value == board[y][x].value
				&& board[y][x].value != 0 && board[y][x].new_val == 0
				&& !board[y][x + 1].new_val)
			{
				filling(board, x, y, a->c);
				a->move = 1;
				x++;
			}
			putting(a, board, &x, &y);
			x--;
		}
	}
}

void			switch_direction(int dir, t_info *a)
{
	if (dir == UP)
		move_up(a->board, a);
	else if (dir == DOWN)
		move_down(a->board, a);
	else if (dir == LEFT)
		move_left(a->board, a);
	else if (dir == RIGHT)
		move_right(a->board, a);
}
