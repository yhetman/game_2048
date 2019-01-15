NAME= game_2048

SRC = src/drawing.c    \
  src/ending.c   \
  src/filling.c    \
  src/initialization.c  \
  src/main.c     \
  src/move.c    \
  libft/libft.a   \
  src/numbers_generator.c \
  src/draw_piece.c  \
  src/putting.c   \
  src/piece.c    \
  src/score.c    \
  src/user_info.c   \
  src/user_name.c   \
  src/loser_screen.c  \
  src/winner_screen.c  \
  src/redrawing.c   \
  src/high_score.c  \
  src/save_score.c  \
  src/usefull.c  \


HEAD = -I ./includes

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

LIB = -lncurses

EOC = \033[0m
GREEN = \e[38;5;132m
RED = \e[38;5;96m
PURPLE = \e[38;5;213m
CYAN = \e[38;5;170m
COL = \e[38;5;225m

all : $(NAME)

$(NAME) :
	@printf "$(COL)Compilation started:$(EOC)\n"
	@make -C ./libft
	@printf "$(CYAN).........................$(EOC)"
	@printf " $(RED)>$(EOC) $(GREEN)$(NAME) is ready.$(EOC)\n"
	@gcc $(FLAGS) $(SRC) $(HEAD) $(LIB) -o $(NAME)
	@printf "$(COL)Compilation succeed!$(EOC)\n"

clean :
	@make -C ./libft clean
	@printf "$(RED)Remove .o-files ...$(EOC)\n"
	@/bin/rm -f $(OBJ)
	@printf "$(RED)Removal of .o-files done!$(EOC)\n"

fclean : clean
	@make -C ./libft fclean
	@printf "$(RED)Remove .exe-file ...$(EOC)\n"
	@/bin/rm -f $(NAME)
	@printf "$(RED)Removal of .exe-file done!$(EOC)\n"

re : fclean all
