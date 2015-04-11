lab3a: lab3a.o
	g++ -o lab3a lab3a.o
lab3a.o: lab3a.cpp
	g++ -c lab3a.cpp
clean:
	rm lab3a*.o

