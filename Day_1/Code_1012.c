#include <stdio.h>

int main()
{
  float A,B,C;
  scanf("%f %f %f",&A,&B,&C);
  double triangle=0.5*A*C;
  double circle =3.14159*C*C;
  double square = B*B;
  double rectengular=A*B;
  double trapejiam=((A+B)/2)*C ;
  printf("TRIANGULO: %.3f\n",triangle);
  printf("CIRCULO: %.3f\n",circle);
  printf("TRAPEZIO: %.3f\n",trapejiam);
  printf("QUADRADO: %.3f\n",square);
  printf("RETANGULO: %.3f\n",rectengular);
  return 0 ;
}
