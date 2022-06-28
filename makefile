default: main.o pilha.o
	gcc main.o pilha.o -o release/final.o

main.o: sources/main.c
	gcc -c sources/main.c -o main.o

pilha.o: sources/pilha.c
	gcc -c sources/pilha.c -o pilha.o

execute:
	release/final.o