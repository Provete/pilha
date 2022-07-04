#ifndef pilha_dinamica
#define pilha_dinamica

typedef struct no
{
    float info;
    struct no* proximo;
} NoLista;

typedef struct pilha
{
    NoLista* topo;
} Pilha;

Pilha* CriarPilha();
int EstaVazia(Pilha* pilha);
void Push(Pilha* pilha, float novoInfo);
float Pop(Pilha* pilha);
void Imprimir(Pilha* pilha);
NoLista* VerTopo(Pilha* pilha);
void Liberar(Pilha* pilha);


#endif