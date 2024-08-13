#include<stdio.h>
#include<stdlib.h>

typedef struct livro Livro;

struct livro{
    char nome[30];
    struct livro *prox;
};

struct livro *aloca(){
    return malloc(sizeof(Livro));
}

void addItem(Livro *cabeca){
    Livro *aux, *novo;

    aux = cabeca;

    while(aux->prox != NULL){
        aux = aux->prox;
    }

    novo = aloca ();
    printf("Digite nome:");

    gets(novo->nome);
    novo->prox = NULL;

    aux->prox = novo;

}

int main(){

    struct livro acervo;
    acervo.prox = NULL;

    addItem(&acervo);
    addItem(&acervo);
    printf("%s\n", acervo.prox->nome);
     printf("%s\n", acervo.prox->prox->nome);

}