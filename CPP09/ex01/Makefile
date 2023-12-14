NAME		=	RPN

HEADER_DIR	=	header
OBJ_DIR		=	obj

SRC			=	main.cpp				\
				RPN.cpp					\
				tools.cpp

HEADER		=	$(HEADER_DIR)/RPN.hpp	\
				$(HEADER_DIR)/tools.hpp

OBJ			= 	$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRC)))

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	c++

all:	$(NAME)

$(NAME): $(HEADER_DIR) $(OBJ_DIR) $(HEADER) $(OBJ)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	$(COMPILE) $(CFLAGS) -c -o $@ $<

$(HEADER_DIR):
	mkdir -p $(HEADER_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all