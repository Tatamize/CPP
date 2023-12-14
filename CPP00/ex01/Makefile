NAME		=	phonebook


HEADER_DIR	=	header
OBJ_DIR		=	obj

SRC			=	PhoneBook.cpp						\
				Contact.cpp							\
				main.cpp
HEADER		=	$(HEADER_DIR)/PhoneBook.h			\
				$(HEADER_DIR)/Contact.h 			\
				$(HEADER_DIR)/main.h

OBJ			=	$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRC)))

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	c++

all: make_obj_dir $(NAME)

make_obj_dir:
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(HEADER_DIR)/

$(NAME): $(OBJ) $(HEADER)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(NAME)


$(OBJ_DIR)/%.o: %.cpp
	$(COMPILE) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all