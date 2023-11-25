#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("Perfect number");
    }
    else
    {
        printf("\nNot a perfect number");
    }
}

