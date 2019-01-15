/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:08:21 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 10:15:47 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

static void	fill_board_up(t_piece board[BOARD_SIZE][BOARD_SIZE],
		int x, int y)
{
	board[y - 1][x].value *= 2;
	board[y - 1][x].new_val = 1;
	board[y][x].value = 0;
	board[y][x].new_val = 0;
}

static void	fill_board_down(t_piece board[BOARD_SIZE][BOARD_SIZE],
		int x, int y)
{
	board[y + 1][x].value *= 2;
	board[y + 1][x].new_val = 1;
	board[y][x].value = 0;
	board[y][x].new_val = 0;
}

static void	fill_board_left(t_piece board[BOARD_SIZE][BOARD_SIZE],
		int x, int y)
{
	board[y][x - 1].value *= 2;
	board[y][x - 1].new_val = 1;
	board[y][x].value = 0;
	board[y][x].new_val = 0;
}

static void	fill_board_right(t_piece board[BOARD_SIZE][BOARD_SIZE],
		int x, int y)
{
	board[y][x + 1].value *= 2;
	board[y][x + 1].new_val = 1;
	board[y][x].value = 0;
	board[y][x].new_val = 0;
}

void		filling(t_piece board[BOARD_SIZE][BOARD_SIZE],
		int x, int y, char c)
{
	if (c == 'u')
		fill_board_up(board, x, y);
	else if (c == 'd')
		fill_board_down(board, x, y);
	else if (c == 'l')
		fill_board_left(board, x, y);
	else if (c == 'r')
		fill_board_right(board, x, y);
}
