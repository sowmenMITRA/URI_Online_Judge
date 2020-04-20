#include <stdio.h>

int main()
{
  int X;
  float Y;

  scanf("%d",&X);
  scanf("%f",&Y);

  float AVERAGE= X/Y;

  printf("%.3f km/l\n",AVERAGE);
  return 0 ;
}
