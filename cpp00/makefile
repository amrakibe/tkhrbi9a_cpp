
NAME = PhoneBook

c++ = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -fr

src =  PhoneBook.cpp \
		contact.cpp \
		main.cpp

OBJ = $(src:.cpp=.o)

$(NAME) : $(OBJ)
	$(g++) $(FLAG) $(OBJ) -o $(NAME)

all : $(NAME)

%.o:%.cpp PhoneBook.hpp Contact.hpp
	$(g++) $(FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all