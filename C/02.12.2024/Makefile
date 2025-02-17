all: safeint.o util.o safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

safeint.o: safeint.c safeint.h
	gcc -c safeint.c -o safeint.o

util.o: util.c util.h
	gcc -c util.c -o util.o

safeadd.o: safeadd.c safeint.h util.h
	gcc -c safeadd.c -o safeadd.o

safesubtract.o: safesubtract.c safeint.h util.h
	gcc -c safesubtract.c -o safesubtract.o

safemultiply.o: safemultiply.c safeint.h util.h
	gcc -c safemultiply.c -o safemultiply.o

safedivide.o: safedivide.c safeint.h util.h
	gcc -c safedivide.c -o safedivide.o

safeadd.exe: safeadd.o safeint.o util.o
	gcc safeadd.c safeadd.o safeint.o util.o -o safeadd.exe

safesubtract.exe: safesubtract.o safeint.o util.o
	gcc safesubtract.c safesubtract.o safeint.o util.o -o safesubtract.exe

safemultiply.exe: safemultiply.o safeint.o util.o
	gcc safemultiply.c safemultiply.o safeint.o util.o -o safemultiply.exe

safedivide.exe: safedivide.o safeint.o util.o
	gcc safedivide.c safedivide.o safeint.o util.o -o safedivide.exe

clean:
	rm -f *.o *.exe