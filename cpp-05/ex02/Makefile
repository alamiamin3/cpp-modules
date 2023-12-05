NAME = Form
SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
%.o: %.cpp Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all