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
TARGET_NAME	:= Bureaucracy
TARGET		:= $(BIN_PATH)/$(TARGET_NAME)

# source files & object files
SRC 		:=	$(addprefix src/, $(addsuffix .cpp, \
					main \
					Bureaucrat))
OBJ 		:= $(subst src, obj, $(SRC:.cpp=.o))

default: mkdir all

$(TARGET): $(OBJ)
	@$(CC) -o $@ $(OBJ) $(HDR_PATH) $(CFLAGS)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@$(CC) $(COBJFLAGS) -o $@ $< $(HDR_PATH)

all: $(TARGET)

run: default
	./$(TARGET)

mkdir:
	@mkdir -p $(BIN_PATH) $(OBJ_PATH)

clean:
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -rf $(BIN_PATH)

re:	fclean all
.PHONY: clean fclean re run mkdir