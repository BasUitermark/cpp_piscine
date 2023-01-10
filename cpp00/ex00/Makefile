NAME		= megaphone
CC			= c++

SRC 		= 	$(addsuffix .cpp, \
					Megaphone)

# INCLUDE = -I ./include
OBJ 		= $(SRC:%.cpp=%.o)

CFLAGS 		= -Wall -Werror -Wextra -std=c++98

GREEN		= \033[1;32m
RED			= \033[1;31m
BLUE		= \033[1;34m
MAGENTA		= \033[1;35m
RESET		= \033[0m

ifneq ("$(wildcard $(NAME))","")
    FILE_EXISTS = 1
else
    FILE_EXISTS = 0
endif

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:	fclean all
.PHONY: clean fclean re