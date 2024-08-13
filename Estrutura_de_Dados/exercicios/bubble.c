#include<stdio.h>

void bubbleSort(int n, int* k);

int main()
{
    int n, i, j, l;
    printf("Digite a quantidade de numeros que quer ordenar:\n");
    scanf("%d", &n);

    int vet[n];
    printf("Digite os numeros que deseja ordenar:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf(" Vetor a ser ordenado:\n");
    for(j = 0; j < n; j++)
    {
        printf(" [%d] ", vet[j]);
    }

    bubbleSort(n, vet);

    printf("\n");

    printf(" Vetor ordenado:\n");
    for(l = 0; l < n; l++)
    {
        printf(" Vetor [%d] -- Endereco de memoria : [%p] \n", vet[l], (void*)&vet[l]);
    }
    return 0;
}

void bubbleSort(int n, int* k)
{
    int m, i;

    for(m = n-1; m > 0; m--)
    {
        for(i = 0; i < m; i++)
        {
            if(k[i]>k[i+1])
            {
                int temp = k[i];
                k[i] = k[i+1];
                k[i+1] = temp;
            }
        }
    }
}