SRCS		=	srcs/directory.cpp \
					srcs/Phonebook.class.cpp \
					srcs/Contact.class.cpp

OBJS			= $(SRCS:.cpp=.o)

CXXFLAGS			= -Wall -Wextra -Werror -I. -std=c++98

NAME			= directory

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

test:		$(NAME)
						./megaphone "shhhhh... I think the students are asleep..."
						./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
						./megaphone

.PHONY:			all clean fclean re test
