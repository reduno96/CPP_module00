SRC= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp \

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ= ${SRC:.cpp=.o}
NAME= Animal

all: ${NAME}

${NAME} : ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ}  -o ${NAME}

%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ} 

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re