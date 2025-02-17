all: main.exe quadraticroots.exe

quadraticroots.exe: quadraticroots.o quadraticroots.h
	gcc quadraticroots.o -o quadraticroots.exe

main.exe: main.c quadraticroots.o quadraticroots.h
	gcc main.c quadraticroots.o quadraticroots.h -o main.exe

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c -o quadraticroots.o

clean:
	rm -f *.exe *.o
