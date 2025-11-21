# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/21 10:19:38 by lantonio          #+#    #+#              #
#    Updated: 2025/11/21 15:21:05 by lantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	mutantstack.out

HEADERS		=	./includes/MutantStack.hpp \

SRCS		= 	./src/main.cpp \

CXX			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

OBJS		=	$(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32mSUCCESS!\033[0m"

%.o:%.cpp $(HEADERS)
	@$(CXX) $(FLAGS) -c $< -o $@

all: $(NAME)

clean :
	@rm -rf $(OBJS)
	@echo "Cleaning objects"

fclean : clean
	@rm -rf $(NAME)
	@echo "cleaning executable"

re : fclean all

.PHONY : all clean fclean re
