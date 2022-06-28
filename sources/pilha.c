#include "pilha.h"

Pilha* CriarPilha()
{
    Pilha* novaPilha = (Pilha*) malloc(sizeof(Pilha));

    if(novaPilha == NULL)
    {
        printf("Gay\n");
        exit(1);
    }

    novaPilha->tamanho = 0;
    return novaPilha;
}

int EstaCheia(Pilha* pilha)
{
    return pilha->tamanho >= MAX_SIZE? 1 : 0;
}

int EstaVazia(Pilha* pilha)
{
    return pilha->tamanho == 0? 1 : 0;
}

void Push(Pilha* pilha, int valor)
{
    if(EstaCheia(pilha))
    {
        printf("Pilha cheia\n");
        return;
    }

    pilha->info[pilha->tamanho] = valor;
    pilha->tamanho++;
    
    return;
}

int Pop(Pilha* pilha)
{
    if(EstaVazia(pilha))
    {
        printf("Vazia\n");
        exit(1);
    }

    pilha->tamanho--;
    return pilha->info[pilha->tamanho];
}

void Imprimir(Pilha* pilha)
{
    for(int i = pilha->tamanho-1; i >= 0; i--)
    {
        printf("Bom elemento %dº: %d\n", i+1, pilha->info[i]);
    }

    return;
}

void Liberar(Pilha* pilha)
{
    free(pilha);
    return;
}

int VerTopo(Pilha* pilha)
{
    if(EstaVazia(pilha))
    {
        printf("vazia\n");
        exit(1);
    }

    return pilha->info[  pilha->tamanho-1 ];
}