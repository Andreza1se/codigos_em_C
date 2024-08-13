#include<stdio.h>
#include<stdlib.h>

typedef struct no NO;

struct no{
    int num;
    struct no *prox;
};

NO* criar_NO(){
    NO * novo = (NO*) malloc(sizeof(NO));
    return novo;
}

NO* inserir_no_vinicius(NO* Lista, int dado){

    NO* novo_no = criar_NO();
    novo_no-> num = dado;

    if(Lista==NULL){
        Lista = novo_no;
        novo_no->prox = NULL;
    }else{
        novo_no->prox = Lista;
        Lista = novo_no;
    }

    return Lista;
}

void imprime_lista(NO* Lista){
    NO* aux = Lista;

    while(aux!=NULL){
        printf("[%d] ", aux->num);
        aux = aux->prox;
    }
    printf("\n");
}

NO* removeNO(NO* Lista, int val){
    NO* ant = NULL; //ponteiro para o elemento anterior
    NO* p = Lista;  // ponteiro para percorrer a lista

    while(p!=NULL && p->num != val){//percorre a lista procurando e guarda o anterior
        ant = p;
        p = p->prox;
    }

    if(p == NULL){//verifica se encontrou o elemento
        return Lista;//se nao emcontrou vai retornar pra lista original
    }
    if(ant == NULL){//retira elemento
        Lista = p->prox;//retira elemento do início
    }else{
        ant->prox = p->prox;//retira elemento da lista
    }

    free(p);

    return Lista;

}


int main() {
    NO* Lista = NULL;

    Lista = inserir_no_vinicius(Lista, 10);
    Lista = inserir_no_vinicius(Lista, 20);
    Lista = inserir_no_vinicius(Lista, 30);
    Lista = inserir_no_vinicius(Lista, 40);
    Lista = inserir_no_vinicius(Lista, 50);

    printf("Lista original: ");
    imprime_lista(Lista);

    Lista = removeNO(Lista, 50);

    printf("Lista apos remocao: ");
    imprime_lista(Lista);

    Lista = removeNO(Lista, 10);

    printf("Lista apos remocao: ");
    imprime_lista(Lista);

    return 0;
}