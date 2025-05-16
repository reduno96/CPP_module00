SRC= main.cpp Fixed.cpp\

OBJ= ${SRC:.cpp=.o}

CC= c++
CXXFLAGS= -Wall -Wextra -Werror -fsanitize=address -std=c++98

NAME= Fixed

${NAME}: ${OBJ}
	${CC} ${CXXFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp  Fixed.hpp
	${CC} ${CXXFLAGS} -c $< -o $@

all: ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: clean all fclean re 
