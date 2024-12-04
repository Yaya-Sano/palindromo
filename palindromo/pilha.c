#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criarPilha(){
    Pilha* p = malloc(sizeof(Pilha));
    p->topo = 0;
    return p;
}

int topo(Pilha* p){
    return p->vetor[p->topo];
}


int estaVazia(Pilha* p){
    if(p->topo == 0){
        return 1;
    }
    return 0;
}

int estaCheia(Pilha* p){
    if(p->topo == MAX){
        return 1;
    }
    return 0;
}

int empilha(Pilha* p, int x){
    if(estaCheia != 0){
        p->vetor[p->topo++] = x;
        return 1;
    }
    else{
        printf("A pilha está cheia!!!");
        return 0;
    }
}

int desempilha(Pilha* p){
    return p->vetor[--p->topo];
}

int destruirPilha(Pilha* p){
    free(p);
}