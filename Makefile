##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

############### Compiler ##################
CC = @gcc
###########################################

############### Unit_Test #################
NAME 			= LearnTest
SRC				= 	$(wildcard src/*.c) \
					$(wildcard tests/*.c)

OBJ 			= $(SRC:.c=.o)
INCPATH 	= -I./include/
CFLAGS		= -Wall -Wextra -Werror
LIB 		= -lcriterion --coverage
###########################################

################# Choose ##################

DEBUG_OFF = @echo -e "\n\e[1;91m DEBUG OFF"
DEBUG_ON = @echo -e "\n\e[1;92m DEBUG ON"
UNIT_OFF = "\e[1;91m UNIT_TEST OFF"
UNIT_ON = "\e[1;92m UNIT_TEST ON"
MODE = "\e[1;93m mode :"

.c.o:
	$(CC) $(CFLAGS) $(INCPATH) $(LIB) -c $< -o $@

PRINT_MODE = $(CHOOSE)
PRINT_DEBUG_MODE = $(DEBUG_OFF)
PRINT_UNIT_MODE = $(UNIT_ON)

all: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(INCPATH) $(LIB) -o $(NAME)

	$(PRINT_DEBUG_MODE)	\
	$(PRINT_UNIT_MODE) 	\
	$(MODE) 			\
	$(PRINT_MODE)

###########################################


############### CLean All #################
exec: $(NAME)
	./LearnTest

clean:
	@rm -f tests/*.o
	@rm -f tests/*.gcda
	@rm -f tests/*.gcno
	@rm -f src/*.gcda
	@rm -f src/*.gcno
	@rm -f src/*.o

fclean: clean
	@rm -f $(NAME)
###########################################

############## Compilation #################
tests_run: fclean all exec
###########################################
