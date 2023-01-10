# tool macros
CC			:= c++
CFLAGS 		:= -Wall -Werror -Wextra -std=c++98 -c

# path macros
HDR_PATH	:= -I include
BIN_PATH 	:= bin
OBJ_PATH 	:= obj
SRC_PATH	:= src

# compile macros
TARGET_NAME	:= Phonebook
TARGET		:= $(BIN_PATH)/$(NAME)


# color macros
GREEN		= \033[1;32m
RED			= \033[1;31m
BLUE		= \033[1;34m
MAGENTA		= \033[1;35m
RESET		= \033[0m

# source files & object files
OBJ 		:= $(subst src, obj, $(SRC:.cpp=.o))
SRC 		:= $(addprefix src/, $(addsuffix .cpp, \
					Main \
					Phonebook \
					Contact))

default: mkdir all

$(TARGET): $(OBJ)
	@$(CC) $(OBJ) $(HDR_PATH) -o $(TARGET_NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@$(CC) $(CFLAGS) $< -o $@ $(HDR_PATH)

all: $(TARGET)

run: all
	./$(TARGET)

mkdir:
	@mkdir -p $(BIN_PATH) $(OBJ_PATH)

clean:
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -rf $(BIN_PATH)

re:	fclean all
.PHONY: clean fclean re run mkdir