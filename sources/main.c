#include <stdio.h>
#include "pilha.h"

int main()
{
    Pilha* pilha = CriarPilha();
    Push(pilha, 5);
    Push(pilha, 4);
    Push(pilha, 5);
    Push(pilha, 1);
    Push(pilha, 2);
    Push(pilha, 2112);
    Push(pilha, 5465);
    Push(pilha, 5774);
    Push(pilha, 54645);
    Push(pilha, 54122);
    Push(pilha, 59787);
    Push(pilha, 53123);
    Push(pilha, 5456312);
    Push(pilha, 59789);
    Push(pilha, 54524);
    Push(pilha, 45645);
    Push(pilha, 56524);
    Push(pilha, 5546456);

    Imprimir(pilha);
    printf("Topo: %d\n", VerTopo(pilha));
    return 0;
}
