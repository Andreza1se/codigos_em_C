#include<stdio.h>
#include<stdlib.h>

typedef struct elemento ELEMENTO;

struct elemento
{
    int valor;
    ELEMENTO *prox;
};

ELEMENTO* insereElemento(ELEMENTO*, int);
ELEMENTO* criarLista();
void imprime(ELEMENTO*);

int main(void)
{
    ELEMENTO *lista;
    
}