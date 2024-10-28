#Makefile
#this is comment
CX = g++
CXFLAGS = -g -Wall
OBJS = main.o complex.o
TARGET = complexer
$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp complex.hpp
	$(CX) $(CXFLAGS) -c main.cpp
complex.o : complex.cpp complex.hpp
	$(CX) $(CXFLAGS) -c complex.cpp
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
