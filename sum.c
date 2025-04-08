#include<stdio.h>
int main()
{
    int a,b,reminder;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    int sum = a + b;
    printf("Sum is :- %d\n",sum);
    printf("reminder is %d\n",a % b);

    //explicit TYPE CONVERSION

    int t=(int)1.999;
    printf("t is : %d",t);
    return 0;
}