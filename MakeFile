CXX = g++

CXXFLAGS	= -std=c++11 -ggdb -Wall
CXXTESTFLAGS = --coverage

all: test

clean:
	rm test

test: Math_utils.cpp test.cpp
	$(CXX) $(CXXFLAGS) $(CXXTESTFLAGS) test.cpp  Math_utils.cpp -o test
