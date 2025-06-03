CC = g++
CCFLAGS = -std=c++20 -v -Wall
SRC = $(wildcard *.cpp)
OBJS = $(wildcard *.o)
TARGET = main 
main:
	$(CC) $(CCFLAGS) $(SRC) -o $(TARGET)
clean:
	rm -f $(OBJS)  $(TARGET)
run: clean main 
	chmod +x ./$(TARGET) & ./$(TARGET)
