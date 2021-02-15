#include<stdio.h>
void main()
{
    int a,s=0,r;
    printf("Enter any number \n");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }
    printf("Sum of the digits id %d \n",s);
}