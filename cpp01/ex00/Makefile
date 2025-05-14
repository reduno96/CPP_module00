SRC= main.cpp Zombie.cpp  newZombie.cpp randomChump.cpp \

OBJ= ${SRC:.cpp=.o}

CC= c++
CXXFLAGS= -Wall -Wextra -Werror -fsanitize=address -std=c++98

NAME= Zombie

${NAME}: ${OBJ}
	${CC} ${CXXFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp  Zombie.hpp newZombie.hpp randomChump.hpp
	${CC} ${CXXFLAGS} -c $< -o $@

all: ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re