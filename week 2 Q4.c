#include<stdio.h>
void main()
{
    int a[10],min,max,n,i;
    printf("Enter the number of element in the array \n");
    scanf("%d",&n);
    printf("Enter element of array \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        min=max=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
                max=a[i];
                if(a[i]<min)
                  min=a[i];
        }
        printf("Smallest element of the array %d \n", min);
        printf("Largest element of the array %d \n",max);
}