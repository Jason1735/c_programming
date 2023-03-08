CC = gcc
OPTION = -g -Wall -pedantic -std=c99
LIBS = 

ifeq ($(LANG),) 
RM = del
else
RM = rm
endif

all: ./main
./main: ./main.o
	${CC} ${OPTION} -o $@ $+ ${LIBS}
./main.o: ./main.c
	$(CC) ${OPTION} -o $@ -c $+

clean:
	$(RM) main.exe main.o

.PHONY:
	all clean
