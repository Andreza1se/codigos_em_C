#include<stdio.h>

void bolha(int vet[], int tamanho){
    int aux;
    for(int i=0; i < tamanho - 1; i++){
        for(int j=0; j < tamanho-i-1; j++){
            if(vet[j]>vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }


}

int main(){
    int vet[] = {20, 13, 17, 11, 14, 18};
    int tamanho = 6;

    bolha(vet,tamanho);

    for(int k=0; k<tamanho; k++){
        printf("[%d]", vet[k]);
    }
    printf("\n");
}