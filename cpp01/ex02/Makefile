SRC= main.cpp

OBJ= ${SRC: .cpp=.o}

CC= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

NAME= main

${NAME}: ${OBJ}
	${CC} ${CXXFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp
	${CC} ${CXXFLAGS} -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}
