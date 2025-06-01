SRC= main.cpp ClapTrap.cpp ScavTrap.cpp \

OBJ= ${SRC:.cpp=.o}

CC= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

NAME= ClapTrap

${NAME}: ${OBJ}
	${CC} ${CXXFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp  ClapTrap.hpp
	${CC} ${CXXFLAGS} -c $< -o $@

all: ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: clean all fclean re 
