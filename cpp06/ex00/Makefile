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
TARGET_NAME	:= Cast
TARGET		:= $(BIN_PATH)/$(TARGET_NAME)

# source files & object files
SRC 		:=	$(addprefix src/, $(addsuffix .cpp, \
					main \
					ScalarConverter))
OBJ 		:= $(subst src, obj, $(SRC:.cpp=.o))

default: mkdir all
ifeq (run,$(firstword $(MAKECMDGOALS)))
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  $(eval $(RUN_ARGS):;@:)
endif


$(TARGET): $(OBJ)
	@$(CC) -o $@ $(OBJ) $(HDR_PATH) $(CFLAGS)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@$(CC) $(COBJFLAGS) -o $@ $< $(HDR_PATH)

all: $(TARGET)


run: default
	@./$(TARGET) $(RUN_ARGS)

mkdir:
	@mkdir -p $(BIN_PATH) $(OBJ_PATH)

clean:
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -rf $(BIN_PATH)
	@rm -rf Garden*

re:	fclean default
.PHONY: clean fclean re run mkdir