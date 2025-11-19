# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/04 12:40:33 by lantonio          #+#    #+#              #
#    Updated: 2025/11/19 12:01:26 by lantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	span.out

HEADERS		=	./includes/Span.hpp \


SRCS		= 	./src/main.cpp \
				./src/Span.cpp \

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
