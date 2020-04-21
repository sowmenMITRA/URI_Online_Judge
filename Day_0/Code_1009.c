#include<stdio.h>
int main()
{
    char arr[100];
    double salary,percentage,extra;
    gets(arr);
    scanf("%lf",&salary);
    scanf("%lf",&extra);

    percentage=(15 * extra)/100;
    double total=percentage+salary;

    printf("TOTAL = R$ %.2lf\n",total);
    return 0 ;

}
