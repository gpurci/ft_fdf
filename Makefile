# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpurci <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/03 14:33:32 by gpurci            #+#    #+#              #
#    Updated: 2017/02/13 19:31:35 by gpurci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = $(shell find . -name "*.c")
OBJ = $(shell find . -name "*.o")
FLAGS = -Wall -Werror -Wextra -lmlx -framework OpenGL -framework AppKit

all:
	@gcc $(FLAGS) $(SRC) -I libft -L libft -lft -I gnl -I .

clean:
	@rm -rf $(OBJ)
