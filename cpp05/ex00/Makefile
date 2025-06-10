SRC= main.cpp Bureaucrat.cpp

OBJ= ${SRC:.cpp=.o}

NAME = Bureaucrat

CXX = g++ -Wall -Wextra -Werror -fsanitize=address -std=c++98

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${SRC} -o ${NAME}

clean :
	rm ${OBJ}

fclean: clean
	rm ${NAME}

re: fclean all