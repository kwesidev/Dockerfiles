CXX=g++
CFLAGS=-I /usr/include/gtest -lgtest -lgtest_main -pthread
binary.o: binary.cc
	  $(CXX) -c binary.cc 
main.o: main.cc
	$(CXX) -c main.cc 

binary: binary.o main.o
	$(CXX) main.o binary.o -o $@

test: test_binary.cpp 
	$(CXX)  test_binary.cpp binary.o $(CFLAGS) -o $@
      
clean:
	 rm *.o binary 

