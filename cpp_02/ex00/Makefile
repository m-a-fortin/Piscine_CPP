# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 18:23:15 by mafortin          #+#    #+#              #
#    Updated: 2022/04/11 11:14:05 by mafortin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed
FLAGS	=	-Wall -Werror -Wextra -Wpedantic -Wconversion -std=c++98
CC		=	clang++
RM		=	rm -rf

OBJ		=	obj

SRCS	=	main.cpp Fixed.cpp
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
