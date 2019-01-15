/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:09:03 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 10:22:24 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

static void	put_all_up(t_info *a,
			t_piece board[BOARD_SIZE][BOARD_SIZE], int *x, int *y)
{
	while (*y > 0 && board[*y - 1][*x].value == 0 &&
		board[*y][*x].value != 0)
	{
		board[*y - 1][*x].value = board[*y][*x].value;
		board[*y - 1][*x].new_val = board[*y][*x].new_val;
		board[*y][*x].value = 0;
		board[*y][*x].new_val = 0;
		a->move = 1;
		*y -= 1;
	}
}

static void	put_all_down(t_info *a,
		t_piece board[BOARD_SIZE][BOARD_SIZE], int *x, int *y)
{
	while (*y < 3 && board[*y + 1][*x].value == 0
		&& board[*y][*x].value != 0)
	{
		board[*y + 1][*x].value = board[*y][*x].value;
		board[*y + 1][*x].new_val = board[*y][*x].new_val;
		board[*y][*x].value = 0;
		board[*y][*x].new_val = 0;
		a->move = 1;
		*y += 1;
	}
}

static void	put_all_left(t_info *a,
		t_piece board[BOARD_SIZE][BOARD_SIZE], int *x, int *y)
{
	while (*x > 0 && board[*y][*x - 1].value == 0
		&& board[*y][*x].value != 0)
	{
		board[*y][*x - 1].value = board[*y][*x].value;
		board[*y][*x - 1].new_val = board[*y][*x].new_val;
		board[*y][*x].value = 0;
		board[*y][*x].new_val = 0;
		a->move = 1;
		*x -= 1;
	}
}

static void	put_all_right(t_info *a,
		t_piece board[BOARD_SIZE][BOARD_SIZE], int *x, int *y)
{
	while (*x < 3 && board[*y][*x + 1].value == 0
		&& board[*y][*x].value != 0)
	{
		board[*y][*x + 1].value = board[*y][*x].value;
		board[*y][*x + 1].new_val = board[*y][*x].new_val;
		board[*y][*x].value = 0;
		board[*y][*x].new_val = 0;
		a->move = 1;
		*x += 1;
	}
}

void		putting(t_info *a, t_piece board[BOARD_SIZE][BOARD_SIZE],
		int *x, int *y)
{
	if (a->c == 'u')
		put_all_up(a, board, x, y);
	else if (a->c == 'd')
		put_all_down(a, board, x, y);
	else if (a->c == 'l')
		put_all_left(a, board, x, y);
	else if (a->c == 'r')
		put_all_right(a, board, x, y);
}
