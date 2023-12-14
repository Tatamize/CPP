NAME		=	ex02

HEADER_DIR	=	header
OBJ_DIR		=	obj

SRC			=	main.cpp							\
				colors.cpp

HEADER		=	$(HEADER_DIR)/colors.h				\
				$(HEADER_DIR)/MutantStack.h			\
				$(HEADER_DIR)/MutantStack.tpp

OBJ			=	$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRC)))

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	c++

all: $(NAME)

$(NAME): $(HEADER_DIR) $(OBJ_DIR) $(OBJ) $(HEADER)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)


$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	$(COMPILE) $(CFLAGS) -c -o $@ $<

$(HEADER_DIR):
	mkdir -p $(HEADER_DIR);

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR);

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all