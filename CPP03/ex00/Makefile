NAME		=	ex00

HEADER_DIR	=	header
OBJ_DIR		=	obj

SRC			=	main.cpp							\
				colors.cpp							\
				ClapTrap.cpp
HEADER		=	$(HEADER_DIR)/main.h				\
				$(HEADER_DIR)/colors.h				\
				$(HEADER_DIR)/ClapTrap.h

OBJ			=	$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRC)))

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	c++

all: $(NAME)

$(NAME): $(OBJ_DIR) $(HEADER_DIR) $(OBJ) $(HEADER)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)


$(OBJ_DIR)/%.o: %.cpp
	$(COMPILE) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)/

$(HEADER_DIR):
	@mkdir -p $(HEADER_DIR)/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all