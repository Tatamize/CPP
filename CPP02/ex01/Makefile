NAME		=	ex01

HEADER_DIR	=	header
OBJ_DIR		=	obj

SRC			=	main.cpp							\
				colors.cpp							\
				Fixed.cpp
HEADER		=	$(HEADER_DIR)/main.h				\
				$(HEADER_DIR)/colors.h				\
				$(HEADER_DIR)/Fixed.h

OBJ			=	$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRC)))

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	c++

all: make_obj_dir $(NAME)

make_obj_dir:
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(HEADER_DIR)/

$(NAME): $(OBJ) $(HEADER)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)


$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	$(COMPILE) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all