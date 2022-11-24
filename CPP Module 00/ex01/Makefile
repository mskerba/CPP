NAME =megaphone

SRC=main.cpp phonebook.cpp contact.cpp display.cpp

OBJ= $(SRC:.cpp=.o)
FLAGS=-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

all : $(NAME)

$(NAME) : $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)
clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all 