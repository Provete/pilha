default: main.o pilha_dinamica.o
	gcc main.o pilha_dinamica.o -o release/final.o

main.o: sources/main.c
	gcc -c sources/main.c -o main.o

pilha.o: sources/pilha.c
	gcc -c sources/pilha.c -o pilha.o

pilha_dinamica.o: sources/pilha_dinamica.c
	gcc -c sources/pilha_dinamica.c -o pilha_dinamica.o

execute:
	release/final.o