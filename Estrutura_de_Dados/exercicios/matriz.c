#include <stdio.h>
void showMat2x3(int (*a)[3])
{
int i,j;
printf("Matrix:\n");
for (i=0; i<2; i++) {
for (j=0; j<3; j++)
printf("%d ",a[i][j]);
printf("\n");
}
}
int main (void)
{
int ms[2][3]={{1,2,3}, {4,5,6} };
showMat2x3(ms);
return 0;
}