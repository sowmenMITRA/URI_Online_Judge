#include<stdio.h>
int main()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    float sq_1=(B*B-4*A*C);
    float R_1=(-B+sqrt(sq_1))/(2*A);
    float R_2=(-B-sqrt(sq_1))/(2*A);
    if(sq_1<0 || A==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
       printf("R1 = %.5f\n",R_1);
       printf("R2 = %.5f\n",R_2);
    }
    return 0 ; 
}
