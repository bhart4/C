mymatrix: datatype.o bstree.o matrix.o main.o
	gcc -o mymatrix datatype.o bstree.o matrix.o main.o

datatype.o: datatype.c datatype.h
	gcc -c datatype.c

bstree.o: bstree.c bstree.h
	gcc -c bstree.c

matrix.o: matrix.c matrix.h
	gcc -c matrix.c

main.o: main.c
	gcc -c main.c

clean: 
	rm -f main *.o core mymatrix
