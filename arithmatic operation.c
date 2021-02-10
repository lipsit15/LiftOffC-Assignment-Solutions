// WAP in C to perform all arithimatic operations

#include<stdio.h>
int main()
{
    int a,b,sum,diff,mul,div;
    printf("Enter two number \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;

    printf("Addition is %d\n",sum);
    printf("Subtraction is %d\n",diff);
    printf("Multiplication is %d\n",mul);
    printf("Division is %d\n",div);
    
    return 0;

