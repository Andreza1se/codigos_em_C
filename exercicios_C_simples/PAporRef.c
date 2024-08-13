#include<stdio.h>

int testa_PA(int n, int* v);

int main(void)
{
    int n, PA, i, k;

    printf("Coloque o valor de n:");
    scanf("%d", &n);

    int v[n];
    printf("Insira as casas do vetor:");
    for (i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }

    PA = testa_PA(n,v, &k);

    if(PA != 0)
    {
        printf("O valor da PA e %d\n", PA);
    }
    
    return 0;
}

int testa_PA(int n, int* v)
{
    int k, i;
    k = v[1] - v[0];

    if(n<3)
        {
            return 0;
        }
    for (i=0; i<n; i++)
    {
        if(v[i] != v[0] + k*i)
        {
            printf("Nao e PA!!!");
            return 0;
        }
    }
    return k;
}