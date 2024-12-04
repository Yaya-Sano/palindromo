#include <stdio.h>
#include <string.h>
#include "pilha.h"
int main(){
    Pilha* p = criarPilha();
    char palavra[] = "adda";
    for(int i = 0; i < strlen(palavra) / 2; i++){
    empilha(p,palavra[i]);
    }

    for(int j = 0; j < strlen(palavra) / 2; j++){
        if(topo(p) == palavra[-1]){
            desempilha(p);
        }
    }
    
       
    if(estaVazia(p) == 1){
        printf("a palavra é um palindromo");
    }
    else{
        printf("nao eh");
    }  
}

