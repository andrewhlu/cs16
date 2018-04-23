# Comments
# This is a Makefile

# output: dependency
#   recipe

testShapes: drawShapes.o testDrawShapes.o tdd.o
	g++ -o testShapes drawShapes.o testDrawShapes.o tdd.o

drawShapes.o: drawShapes.cpp
	g++ -c drawShapes.cpp

testDrawShapes.o: testDrawShapes.cpp
	g++ -c testDrawShapes.cpp

tdd.o: tdd.cpp tdd.h
	g++ -c tdd.cpp

clean:
	rm *.o