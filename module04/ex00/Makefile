SRCS		=	srcs/main.cpp \
					srcs/Cat.cpp \
					srcs/Dog.cpp \
					srcs/Animal.cpp \
					srcs/WrongAnimal.cpp \
					srcs/WrongCat.cpp

OBJS			= $(SRCS:.cpp=.o)

CXXFLAGS			= -Wall -Wextra -Werror -I. -std=c++98

NAME			= Polymorphisme

RM				= rm -f

CXX				= clang++

AR				= ar rcs

.c.o:
				$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) -L.

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
