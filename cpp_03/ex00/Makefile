# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 18:23:15 by mafortin          #+#    #+#              #
#    Updated: 2022/04/25 12:11:09 by mafortin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	claptrap
FLAGS	=	-Wall -Werror -Wextra -Wpedantic -Wconversion -std=c++98
CC		=	c++
RM		=	rm -rf

OBJ		=	obj

SRCS	=	main.cpp ClapTrap.cpp
OBJS	=	$(addprefix $(OBJ)/, $(SRCS:.cpp=.o))

$(OBJ)/%.o:		%.cpp
			$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJ) $(OBJS)
			$(CC) $(OBJS) -o $(NAME)

$(OBJ):
			@mkdir -p $(OBJ)

all:		$(NAME)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME) $(OBJ)

re:			fclean all

format:
			@clang-format -i $(SRCS)

.PHONY:		all clean fclean re format
