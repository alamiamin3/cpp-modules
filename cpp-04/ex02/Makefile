NAME = animal
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
%.o: %.cpp Cat.hpp Animal.hpp Dog.hpp Brain.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all