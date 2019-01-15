/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <yhetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 16:30:16 by yhetman           #+#    #+#             */
/*   Updated: 2019/01/13 18:03:47 by anyvchyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include "../libft/includes/libft.h"
# include <time.h>
# include <signal.h>
# include <curses.h>

# define BOARD_SIZE 4
# define UP 'w'
# define DOWN 's'
# define LEFT 'a'
# define RIGHT 'd'
# define COLOR_2 1
# define COLOR_4 2
# define COLOR_8 3
# define COLOR_16 4
# define COLOR_32 5
# define COLOR_64 6
# define COLOR_128 7
# define COLOR_256 8
# define COLOR_512 9
# define COLOR_1024 10
# define COLOR_2048 11
# define COLOR_4096 12
# define COLOR_8182 13
# define COLOR_16364 14
# define COLOR_BORDER 15
# define COLOR_MENU 16

enum	e_const
{
	WIN_VALUE = 2048
};

typedef struct	s_piece
{
	int			value;
	int			new_val;
}				t_piece;

typedef struct	s_info
{
	t_piece		board[BOARD_SIZE][BOARD_SIZE];
	char		*user_name;
	int			piece_width;
	int			piece_length;
	int			move;
	int			win;
	int			high_score;
	char		c;
}				t_info;

int				victory_pruffs(t_info *all);
void			loser_screen(t_info *all, int i);
void			winner_screen(void);
void			drawing(t_info *all);
void			redrawing(t_info *all);
int				ending(t_info *all);
int				piece_column_size(void);
int				piece_row_size(void);
void			filling(t_piece board[BOARD_SIZE][BOARD_SIZE],
				int x, int y, char c);
void			initialization(t_info *all);
void			switch_direction(int dir, t_info *all);
void			numbers_generator(t_piece board[BOARD_SIZE][BOARD_SIZE]);
void			print_all_pieces(t_info *all);
char			**score_count(void);
int				high_score(void);
void			save_highest_score(int score, char *player_name);
int				total_score(t_info *all);
int				user_info(void);
void			user_name(t_info *all);
void			putting(t_info *a, t_piece board[BOARD_SIZE][BOARD_SIZE],
				int *x, int *y);
#endif
