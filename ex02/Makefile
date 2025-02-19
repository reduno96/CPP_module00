SRC= Account.cpp tests.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ= ${SRC:.cpp=.o}
NAME= phone 

all: ${NAME}

${NAME} : ${OBJ} Account.hpp
	${CXX} ${CXXFLAGS} ${OBJ}  -o ${NAME}

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ} ${NAME}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re