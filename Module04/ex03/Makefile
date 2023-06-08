NAME 	= ./materia
SRCS 	= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS 	= ${SRCS:.cpp=.o}
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 #-fsanitize=address
				
all			:	${NAME}

.cpp.o: 
				${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}
				
all			:	${NAME}

${NAME} 	:	${OBJS}
				@echo "\033[32m\n🧠 Compiling ... \n\033[33;1m"
				$(CC) ${CFLAGS} ${OBJS} -o ${NAME}
				@echo "\033[32m📄 ex03 Compiled !\n"

clean		:	
				@echo "\033[32m\n🧻 Clean ... \n\033[33;1m"
				@rm -rf ${OBJS}
				@echo "\033[32;1m🗞 Deleting all '.o' files !\n"

fclean 		:	clean
				@echo "\033[32m\n🧻 Fclean ... \n\033[33;1m"
				@rm -rf ${NAME}
				@echo "\033[32;1m\n🗑  Deleting everything !\n"

re 			:	fclean all
				@echo "\033[32;1m\n🔄 Reset made !\n"

.PHONY: clean re all fclean