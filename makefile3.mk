# test_date: testDate.o Date.o
# 	g++ -o test_date testDate.o Date.o

# testDate.o: testDate.cpp Date.h
# 	g++ -c testDate.cpp

# Date.o: Date.cpp Date.h
# 	g++ -c Date.cpp

CC= g++
cFALGS= -g -Wall
LIBS=
INCS= -I .

PojectName = test_date
SOURCES = $(wildcard *.cpp)
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))

all: $(PojectName)
	@echo "===Build is done==="
	

%.o: %.cpp 
	$(CC) -c $<

$(PojectName): $(OBJECTS)
	$(CC) $(LIBS) $(cFLAGS) $(INCS) -o $@ $(OBJECTS)

.PHONY: cleanall cleanobj 

cleanall :  
	cmd //C del	*.exe *.o

cleanobj :
	cmd //C del	*.o

	