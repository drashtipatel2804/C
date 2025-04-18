/*a. Write a program to print the average of 3 numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter a:-\n");
    scanf("%d",&a);
    printf("Enter b:-\n");
    scanf("%d",&b);
    printf("Enter c:-\n");
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("Average is:- %f",avg);
    return 0;
}*/

/*b. Write a program to check if given character is digit
 or not.*/


#include<stdio.h>
int sum(int a,int b);


int main()
{

    // char c;
    // printf("Enter C:-\n");
    // scanf("%c",&c);
    // if(c>='0' && c<='9')
    // {
    //     printf("%c is an integer ",c);
    // }
    // else
    // {
    //     printf("%c is not an integer %c",c);
    // }

    /*Write a program to check if a given number is
 Armstrong number or not.
 (Search what is Armstrong number*/

    // int n,sum=0,m,n1;
    // printf("Enter the number:-\n");
    // scanf("%d",&n);
    // n1=n;
    // int i=0;
    // while(n1%10!=0)
    // {
    //     m=n1%10;
    //     sum=sum+(m*m*m);
    //     n1=n1/10;

    // }
    // if(sum==n)
    // {
    //     printf("%d is a armstrong number",n);
    // }
    // else
    // {
    //     printf("%d is not a armstrong number",n);
    // }

    int a,b,s,m;
    printf("Enter number a :\n");
    scanf("%d",&a);
    printf("Enter number b :\n");
    scanf("%d",&b);
    
    s=sum(a,b);
    m=sum(a,b);
    printf("sum is %d",s);
    printf("mul is %d",m);
    return 0;
}
int sum(int a,int b)
{
    int s=a+b;
    int m=a*b;

    return s;
   
}