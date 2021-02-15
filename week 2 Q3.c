#include<stdio.h>
void main()
{
    char a[100];
    int i,w=0;
    printf("Enter the sentence \n");
    scanf("%[^\n]",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='')
        w=w+1;
    }
    printf("Total number of words %d \n",w+1);
    


}




