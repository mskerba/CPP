NAME =Serialization

SRC=main.cpp Serialization.cpp

CPPFLAGS=-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

OBJ= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all 