all: taskmanager.exe processes.o

taskmanager.exe: taskmanager.c processes.o
	gcc taskmanager.c processes.o -o taskmanager.exe
processes.o: processes.c processes.h
	gcc -c processes.c -o processes.o
clean:
	rm -f *.o *.exe