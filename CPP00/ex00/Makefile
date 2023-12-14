NAME 	= megaphone

OBJ_DIR		=	obj

SRC			=	megaphone.cpp	\
				main.cpp

OBJ			= 	$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRC)))

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	c++

all: make_obj_dir $(NAME)

make_obj_dir:
	@mkdir -p $(OBJ_DIR)/

$(NAME): $(OBJ)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	$(COMPILE) $(CFLAGS) -c -o $@ $<


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	