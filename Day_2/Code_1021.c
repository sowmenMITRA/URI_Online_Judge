#include<stdio.h>
int main()
{
    double n;
    int a,b,c,d,e,f,g,h,i,j,k,l,total;
    scanf("%lf",&n);
    total=n*100;

    a=total/10000;
    total=total%10000;
    b=total/5000;
    total=total%5000;
    c=total/2000;
    total=total%2000;
    d=total/1000;
    total=total%1000;
    e=total/500;
    total=total%500;
    f=total/200;
    total=total%200;
    g=total/100;
    total=total%100;
    h=total/50;
    total=total%50;
    i=total/25;
    total=total%25;
    j=total/10;
    total=total%10;
    k=total/5;
    total=total%5;
    l=total;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",l);
    return 0 ;
}
