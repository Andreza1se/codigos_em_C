#include<stdio.h>

int main(){

    int N;
    double media;
    int notas[N];

    scanf("%d\n", &N);
    scanf("%d", notas);

      if(notas<=10){
        media = notas/N;
    }

  printf("%lf", media);


return 0;
}

