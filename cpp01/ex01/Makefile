SRC= main.cpp Zombie.cpp  zombieHorde.cpp \

OBJ= ${SRC: .cpp=.o}

CC= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

NAME= Zombie

${NAME}: ${OBJ}
	${CC} ${CXXFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp  Zombie.hpp newZombie.hpp randomChump.hpp
	${CC} ${CXXFLAGS} -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}
