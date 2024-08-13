#include<stdio.h>
#include<stdlib.h>

typedef struct NO{
    int dado;
    struct NO *prox;
}NO;

typedef struct Pilha
{
    NO *topo;
}Pilha;

void incializaPilha(Pilha *p){
    p->topo = NULL;
}
void empilha(int dado, Pilha *p){
    NO *ptr = (NO*) malloc(sizeof(NO));
    if(ptr==NULL){
        printf("erro na aloc\n");
        return;
    }else{
        ptr->dado = dado;
        ptr->prox = p->topo;
        p->topo = ptr;    
        }
}

int desempilha(Pilha *p){
    NO* ptr = p->topo;
    int dado;

    if(ptr==NULL){
        printf("Pilha vazia\n");
        exit(0);
    }else{
        p->topo = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        return dado;
    }
    
}

void imprimePilha(Pilha *p){
    NO *ptr = p->topo;

    if(ptr == NULL){
        printf("Pilha vazia\n");
        return;
    }else{
        while(ptr != NULL){
            printf("Pilha[%d]\n", ptr->dado);
            ptr = ptr->prox;
        }
        printf("\n");
    }
}

int main(){
    Pilha *p1 = (Pilha*) malloc(sizeof(Pilha));

    if(p1==NULL){
        printf("ERRO ALOC\n");
        exit(0);
    }else{
        incializaPilha(p1);
        imprimePilha(p1);
        empilha(10,p1);
        imprimePilha(p1);
        empilha(20,p1);
        imprimePilha(p1);
        empilha(30,p1);
        imprimePilha(p1);

        printf("\n");
        printf("Desempilha: %d\n", desempilha(p1));
         imprimePilha(p1);
         printf("Desempilha: %d\n", desempilha(p1));
          imprimePilha(p1);
          printf("Desempilha: %d\n", desempilha(p1));
           imprimePilha(p1);
           printf("Desempilha: %d\n", desempilha(p1));
            imprimePilha(p1);
    }
}