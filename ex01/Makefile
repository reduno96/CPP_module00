SRC= Contact.cpp \
	PhoneBook.cpp \
	ft_main.cpp \

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ= ${SRC:.cpp=.o}
NAME= phone 

all: ${NAME}

${NAME} : ${OBJ} Contact.hpp PhoneBook.hpp
	${CXX} ${CXXFLAGS} ${OBJ}  -o ${NAME}

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ} ${NAME}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re