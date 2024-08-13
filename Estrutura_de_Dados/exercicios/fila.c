#include<stdio.h>
#include<stdlib.h>

typedef struct NO{
    int dado;
    struct NO *prox;
}NO;

typedef struct FILA{
    NO *ini; //ponteiro para  inicio da fila
    NO *fim; //ponteiro para  final da fila
}FILA;

void iniciaFila(FILA *f){
    f->ini = NULL;
    f->fim = NULL;
}

void enfileira( int dado, FILA *f){
    NO *ptr = (NO*) malloc(sizeof(NO));
    if(ptr == NULL){
        printf("Erro Aloc\n");
        return;
    }else{
        ptr->dado = dado;
        ptr->prox = NULL;
        if(f->ini == NULL){
            f->ini = ptr;
        }else{
            f->fim->prox = ptr;
        }

        f->fim = ptr;//aponta para o novo fim
    }
}

int desenfileira(FILA *f){
    NO *ptr = f->ini;
    int dado;

    if(ptr!=NULL){
        f->ini = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        return dado;
    }else{
        printf("Fila vazia\n");
        exit(0);
    }
}

void imprimeFila(FILA *f){
    NO *ptr = f->ini;

    if(ptr!=NULL){
        while(ptr!=NULL){
            printf("[%d]  ", ptr->dado);
            ptr = ptr->prox;
        }
    }else{
            printf("Fila vazia\n");
            return;
        }
    printf("\n");    
}
int main(){
    FILA *f1 = (FILA *) malloc(sizeof(FILA));
        if(f1==NULL){
            printf("Erro Alc");
            exit(-1);
        }else{
            iniciaFila(f1);
            enfileira(10,f1);
            enfileira(20,f1);
            enfileira(30,f1);

            imprimeFila(f1);
            desenfileira(f1);
            imprimeFila(f1);
            desenfileira(f1);
            imprimeFila(f1);
            desenfileira(f1);
            imprimeFila(f1);//imprime a fila vazia
            
            free(f1);//liberar a memória
        }
}