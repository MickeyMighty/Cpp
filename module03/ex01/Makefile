SRCS		=	srcs/main.cpp \
					srcs/ClapTrap.cpp \
					srcs/ScavTrap.cpp

OBJS			= $(SRCS:.cpp=.o)

CXXFLAGS			= -Wall -Wextra -Werror -I. -std=c++98

NAME			= ScavTrap

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
