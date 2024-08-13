#include<stdio.h>
#include<stdlib.h>

int busca(int n, int *vet, int elemen){
    int inicio = 0;
    int fim = n-1;
    int meio;

    while(inicio<=fim){
        meio = (int) (inicio + fim)/2;
        if(elemen < vet[meio]){
            fim =meio-1;

        }else if(elemen < vet[meio]){
                inicio = meio + 1;
        }else{
            return meio;
        }
    }
    return -1;
}