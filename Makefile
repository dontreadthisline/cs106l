clean:
	rm -rf main.o main 
main.o: vector.h main.cpp
	g++ -c -Wall main.cpp 
main: main.o 
	g++ -o  main main.o 
run: clean main
	chmod +x ./main & ./main