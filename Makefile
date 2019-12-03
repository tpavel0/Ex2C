all: work

work: main.o myBank.o
	gcc main.o myBank.o -o work

main.o: main.c
	gcc -c main.c

myBank.o: myBank.c
	gcc -myBank.c

clean:
	rm -rf *.o *.a *.so