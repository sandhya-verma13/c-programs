#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==1||n==2||n==3)
    {
        printf("Prime number");
    }
    else
    {
        if(n%2==0||n%3==0)
        {
            printf("\nNot a prime number");
        }
        else
        {
            printf("\nPrime numbers");
        }
    }
    
}

