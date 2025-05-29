CXX = g++ 
CXXFLAGS = -std=c++20 -Wall -v 
SRCS = $(wildcard *.cpp)
OBJS = $(wildcard *.o)
TARGET = main 
main:
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)
run: main
	chmod +x ./main & ./main
clean: 
	rm -f $(TARGET) 
	rm -f $(OBJS)