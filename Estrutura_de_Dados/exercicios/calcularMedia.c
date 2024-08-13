#include<stdio.h>

float calculo_media(float g1, float g2, float g3);

int main(void){
    float g1, g2, g3, c_media;
    scanf("%f", &g1);
    scanf("%f", &g2);
    scanf("%f", &g3);

    c_media = calculo_media(g1,g2,g3);
    if(c_media >= 5 && g1 >= 3 && g2 >= 3 && g3 >= 3){
        printf("vc passou parabens sua media e : %.1f", c_media);
    }else{
        printf("aaaaaaaaa vai reprovaaaaaaaaaaaaaaaaaarr sua media e: %.1f", c_media);
    }

}

float calculo_media(float g1, float g2, float g3){
    float c_media;

    c_media = (g1+g2+g3)/3;

    return c_media;
}