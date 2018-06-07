CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= testFuncs

COMMON_OBJECT_FILES = strFuncs.o tddFuncs.o recLinkedListFuncs.o linkedListFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./testFuncs 1
	./testFuncs 2
	./testFuncs 3

testFuncs: testFuncs.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
