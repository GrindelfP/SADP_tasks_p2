CC=g++
CFLAGS=-c -Wall

all: sadp_p2

sadp_p2: main.o
	$(CC) main.o -o sadp_p2

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *.o sadp_p2