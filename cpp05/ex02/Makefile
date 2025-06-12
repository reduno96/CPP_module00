SRC= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJ= ${SRC:.cpp=.o}

NAME = Bureaucrat

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS}  ${SRC} -o ${NAME}

%.o: %.cpp 
	${CXX} ${CXXFLAGS} -c $< -o $@

clean :
	rm ${OBJ}

fclean: clean
	rm ${NAME}

re: fclean all

.PHONY: all clean fclean re