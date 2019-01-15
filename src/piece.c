/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 05:42:04 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 05:57:45 by yhetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

int		piece_column_size(void)
{
	int		column;
	int		i;

	column = getmaxx(stdscr) - 1;
	i = 0;
	while ((column - i) % 4 != 0)
		i++;
	return ((column - i) / 4);
}

int		piece_row_size(void)
{
	int		row;
	int		i;

	row = getmaxy(stdscr) - 4;
	i = 0;
	while ((row - i) % 4 != 0 && row - i != row)
		i++;
	return ((row - i) / 4);
}
