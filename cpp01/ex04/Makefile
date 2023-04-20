# tool macros
CC			:= c++
CFLAGS 		:= -Wall -Werror -Wextra -std=c++98
COBJFLAGS 	:= $(CFLAGS) -c

# path macros
HDR_PATH	:= -I include
BIN_PATH 	:= bin
OBJ_PATH 	:= obj
SRC_PATH	:= src

# compile macros
TARGET_NAME	:= openFile
TARGET		:= $(BIN_PATH)/$(TARGET_NAME)


# color macros
GREEN		= \033[1;32m
RED			= \033[1;31m
BLUE		= \033[1;34m
MAGENTA		= \033[1;35m
RESET		= \033[0m

# source files & object files
SRC 		:= $(addprefix src/, $(addsuffix .cpp, \
					main))
OBJ 		:= $(subst src, obj, $(SRC:.cpp=.o))

default: mkdir all

$(TARGET): $(OBJ)
	@$(CC) -o $@ $(OBJ) $(HDR_PATH) $(CFLAGS)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@$(CC) $(COBJFLAGS) -o $@ $< $(HDR_PATH)

all: $(TARGET)

run1: default
	./$(TARGET) test_files/test1.txt Pancakes Eggs
run2: default
	./$(TARGET) test_files/test2.txt Strawberry Melons
run3: default
	./$(TARGET) test_files/test2.txt " " "Hello World"

mkdir:
	@mkdir -p $(BIN_PATH) $(OBJ_PATH)

clean:
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -rf $(BIN_PATH)

re:	fclean default
.PHONY: clean fclean re run mkdir