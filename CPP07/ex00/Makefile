NAME		=	ex00

HEADER_DIR	=	header
OBJ_DIR		=	obj

SRC			=	main.cpp								\
				colors.cpp


HEADER		=	$(HEADER_DIR)/colors.h					\
				$(HEADER_DIR)/swap.h					\
				$(HEADER_DIR)/min.h						\
				$(HEADER_DIR)/max.h
							


OBJ			=	$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRC)))

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 		# -Wshadow -pedantic
COMPILE		=	c++

all: $(NAME)

$(NAME): $(OBJ_DIR) $(HEADER_DIR) $(OBJ) $(HEADER)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)/

$(HEADER_DIR):
	mkdir -p $(HEADER_DIR)/

$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	$(COMPILE) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all