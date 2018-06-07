CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= strFuncsTest

COMMON_OBJECT_FILES = strFuncs.o tddFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./strFuncsTest 1
	./strFuncsTest 2

strFuncsTest: strFuncsTest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
