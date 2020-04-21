#include<stdio.h>
int main()
{
    int number;
    int hour;
    float money,SALARY;

    scanf("%d",&number);
    scanf("%d",&hour);
    scanf("%f",&money);

	SALARY=hour * money;

    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0 ;
	
}
