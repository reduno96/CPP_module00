SRC= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp \

OBJ= ${SRC:.cpp=.o}

CC= c++
CXXFLAGS= -Wall -Wextra -Werror -fsanitize=address -std=c++98

NAME= Weapon

${NAME}: ${OBJ}
	${CC} ${CXXFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp  Weapon.hpp newWeapon.hpp randomChump.hpp
	${CC} ${CXXFLAGS} -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}
