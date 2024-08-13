#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main(void)
{
    int *vetor;
    int n;
    int pos;

    printf("Entre o numero de elementos que vai inserir no vetor: ");
    scanf("%d", &n);

    vetor = (int *)malloc(n*sizeof(int));
    if(vetor==NULL)
    {
        printf("Não tem espaco de memoria suficiente para criar um vetor com %d elementos.",n);
        exit(1);
    }

    for(pos = 0;pos <n; pos++)
    {
        scanf("%d", &vetor[pos]);// vai ler os elementos do vetor
      
    }
   
    free(vetor);//libera espaço de memoria.

    return 0;
}