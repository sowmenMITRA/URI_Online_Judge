#include <stdio.h>

int main()
{
  float A,B,C,MEDIA;
  scanf("%f",&A);
  scanf("%f",&B);
  scanf("%f",&C);

  MEDIA=(2*A+3*B+5*C)/(2+3+5);
  printf("MEDIA = %0.1f\n",MEDIA);
  return 0 ;
}
