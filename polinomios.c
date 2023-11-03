#include<stdio.h>
#include<math.h>

double avalia(double* poli, int grau, double x)
{
    double resultado = 0;
    for(int i = 0; i <= grau; i++)
    {
        resultado += poli[i]*pow(x,i);
    }

    return resultado;
}

int main()
{
    double poli[] = {12, 2, 3};
    double x;
    x=4;

    int grau = sizeof(poli)/ sizeof(poli[0]) - 1;
    double resultado = avalia(poli, grau, x);

    printf("O valor do polinomio e: %.1f\n", resultado);

    return 0;
}