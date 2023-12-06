# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperrein <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 12:33:18 by aperrein          #+#    #+#              #
#    Updated: 2023/09/07 12:33:20 by aperrein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	weapon

OBJ_DIR		=	OBJ/

SRC			=	Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

OBJ			=	$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

RM			=	rm -f

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

all			:	$(OBJ_DIR) $(NAME)

$(OBJ_DIR)%.o:  $(SRC_DIR)%.cpp
				gcc $(CFLAGS) -c $< -o $@

$(OBJ_DIR)	:	
				mkdir $(OBJ_DIR)

$(NAME)		:	$(OBJ)
				g++	$(CFLAGS) -o $(NAME) $(OBJ)

clean		:
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all