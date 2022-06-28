#ifndef pilha_h
#define pilha_h

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50

typedef struct pilha
{
    int tamanho;
    int info[MAX_SIZE];
} Pilha;

Pilha* CriarPilha();
void Push(Pilha* pilha, int valor);
void Imprimir(Pilha* pilha);
int Pop(Pilha* pilha);
int VerTopo(Pilha* pilha);

#endif