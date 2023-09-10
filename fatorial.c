#include<stdio.h>

int fat(int i);
int conjunto( int n, int p);

int main(void)
{
    int i;
    int n, p;
    int contador;

    scanf("%d", &i);
    //conjunto = fat(n)/fat(p)*fat(n-p);
    for(n=0;n<i;n++){
        for(p=0;p<=n;p++){
        contador = conjunto(n,p);
        printf("%d", contador);
        }
    }

    return 0;
}

int fat(int i){

    int c;
    if(i==0)
        c=1;
    else
        c=i*fat(i-1);
    return c;
}

int conjunto(int n, int p){

    return fat(n)/fat(p)*fat(n-p);

}
