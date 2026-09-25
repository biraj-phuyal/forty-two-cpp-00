NAME	= phonebook

SRC		= PhonebookAdd.cpp contact.cpp main.cpp utils.cpp PhonebookSearch.cpp
OBJ_DIR	= obj
OBJ		= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
