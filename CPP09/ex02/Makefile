NAME		=	PmergeMe

HEADER_DIR	=	header
OBJ_DIR		=	obj

SRC			=	main.cpp			\
				PmergeMe.cpp		\
				SortList.cpp		\
				SortVector.cpp		\
				tools.cpp			\
				colors.cpp

HEADER		=	$(HEADER_DIR)/PmergeMe.hpp		\
				$(HEADER_DIR)/SortList.hpp		\
				$(HEADER_DIR)/SortVector.hpp	\
				$(HEADER_DIR)/tools.hpp			\
				$(HEADER_DIR)/colors.hpp

OBJ			= 	$(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(SRC)))

CFLAGS		=	-Wall -Wextra -Werror -std=c++98
COMPILE		=	c++ -g3								// -g3 is a flag to debug by lldb

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
	rm -f result_vector result_list result_default

re: fclean all