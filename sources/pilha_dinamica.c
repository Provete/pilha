#include <stdlib.h>
#include <stdio.h>
#include "pilha_dinamica.h"


Pilha* CriarPilha()
{
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->topo = NULL;
    return pilha;
}

int EstaVazia(Pilha* pilha)
{
    return pilha->topo == NULL? 1 : 0;
}

void Push(Pilha* pilha, float novoInfo)
{
    NoLista* novoNo = (NoLista*) malloc(sizeof(NoLista));

    if(novoNo == NULL)
    {
        printf("deu ruim\n");
        exit(1);
    }

    novoNo->info = novoInfo;
    novoNo->proximo = pilha->topo;
    pilha->topo = novoNo;
    return;
}

float Pop(Pilha* pilha)
{
    if(EstaVazia(pilha))
    {
        printf("pilha vazia\n");
        exit(1);
    }

    NoLista* noRemovido = pilha->topo;
    float infoRemovida = noRemovido->info;

    pilha->topo = pilha->topo->proximo;

    free(noRemovido);

    return infoRemovida;
}

void Imprimir(Pilha* pilha)
{
    if(EstaVazia(pilha))
    {
        printf("Pilha Vazia\n");
        return;
    }

    NoLista* iterador = pilha->topo;

    while(iterador != NULL)
    {
        printf("Bom elemento: %f\n", iterador->info);
        iterador = iterador->proximo;
    }
}

NoLista* VerTopo(Pilha* pilha)
{
    return pilha->topo;
}

void Liberar(Pilha* pilha)
{
    while(!EstaVazia(pilha))
    {
        Pop(pilha);
    }
}
