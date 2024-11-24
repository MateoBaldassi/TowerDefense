##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile for do-op
##

SRC			=		src/my_defender.c \
					src/do_events.c \
					src/my_anim.c \
					src/my_display.c \
					src/my_init_game.c \
					src/my_init_menu.c \
					src/my_destroyer.c \
					src/my_init_end.c \
					src/my_scene.c \
					src/tiles.c \
					src/map.c \

OBJ			=	$(SRC:.c=.o)

LIB_PATH	=		lib/

NAME_LIB	=		libmy.a

PATH_MAKE	=		lib/

BIN_NAME	=		my_defender

CFLAGS = -I include -Llib -l csfml-graphics -l csfml-system -l csfml-audio -l csfml-window -lmy -Wall -Wextra

all:	 compil_lib $(BIN_NAME)

compil_lib:
	@make -C $(PATH_MAKE)

$(BIN_NAME): $(OBJ)
	@gcc -o $(BIN_NAME) $(OBJ) -L$(LIB_PATH) $(CFLAGS)
	@echo "binary create"

clean:
	make clean -C $(LIB_PATH)
	@rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIB_PATH)
	@rm $(BIN_NAME)
	@echo "binary remove"

re: fclean all
