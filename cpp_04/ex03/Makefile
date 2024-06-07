NAME = Interface
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp IMateriaSource.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all