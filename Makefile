CC=g++
CFLAGS=-c -Wall

all: sadp_p2

sadp_p2: main.o complexNumber.o
	$(CC) main.o complexNumber.o -o sadp_p2

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

complexNumber.o: complexNumber.cpp
	$(CC) $(CFLAGS) complexNumber.cpp

clean:
	rm -rf *.o sadp_p2