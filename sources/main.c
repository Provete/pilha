#include <stdio.h>
#include "pilha_dinamica.h"

int main()
{
    Pilha* pilha = CriarPilha();
    Push(pilha, 3.5);
    Push(pilha, 7.5);
    Push(pilha, -34.5);
    Push(pilha, -32.5);
    Push(pilha, -33123.5);
    Push(pilha, 3.5123);
    Push(pilha, 75.5);
    Push(pilha, 543.5);
    Push(pilha, 13.5);
    Push(pilha, -453.5);
    Push(pilha, 3.5);
    Push(pilha, -45.5);

    Imprimir(pilha);

    Liberar(pilha);
    Imprimir(pilha);
    return 0;
}
