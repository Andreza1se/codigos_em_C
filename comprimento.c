  #include <stdio.h>
  #define pi 3.1415

  int main(){

    float area, raio, volume, comprimento, total;

      printf("informe o raio:\n");

      scanf("%f", &raio);

      area = pi * raio * raio;
      comprimento = 2 * pi * raio;
      volume = (4/3)*(pi*raio*raio*raio);
      total= area + comprimento + volume;

      printf("area = %.2f, comprimento = %.2f, volume = %.2f\n", area, comprimento, volume);

      printf("total= area%f + comprimento%f + volume%f");

      printf("\n");
    return 0;
  }
