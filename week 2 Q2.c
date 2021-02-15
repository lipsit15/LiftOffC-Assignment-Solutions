#include<stdio.h>
void main()
{
    int a[10],i,r,sum=0;
    printf("Enter 10 numbers \n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        r=a[i]%2;
        if(r==0&&(i+1)%2==0)
        sum=sum+a[i];
        else
             sum=sum+0;
    }
    printf("Sum of even numbers on even place %d \n", sum);
}