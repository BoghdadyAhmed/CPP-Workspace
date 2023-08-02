C = gcc
CC = g++
OBJS = Date.o testDate.o 
SRC = $(OBJS, .o=.c)

testDate: $(OBJS) 
	$(CC) -o $@ $(OBJS)
	
# Define a pattern rule that compiles every .c file into a .o file
%.o: %.c
	$(CC) -c $@ $<

.PHONY: cleanall cleanobj 

cleanall : cleanobj 
	cmd //C del	*.exe

cleanobj :
	cmd //C del	*.o

