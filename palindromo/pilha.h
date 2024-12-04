#ifndef PILHA_H
#define PILHA_H
#define MAX 100

typedef struct pilha{
    int topo;
    int vetor[MAX];
}Pilha;

Pilha* criarPilha();
int topo(Pilha* p);
int estaVazia(Pilha* p);
int estaCheia(Pilha* p);
int empilha(Pilha* p, int x);
int desempilha(Pilha* p);
int destruirPilha(Pilha* p);
#endif