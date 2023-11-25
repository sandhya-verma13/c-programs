#include<stdio.h>
int main()
{
    int m1,m2,m3;
    printf("Enter the Mark1:");
    scanf("%d",&m1);
    printf("\nEnter the Mark2:");
    scanf("%d",&m2);
    printf("\nEnter the Mark3:");
    scanf("%d",&m3);
    if(m1>=40&&m2>=40&&m3>=40)
    {
        printf("\nResult:PASS");
    }
    else
    {
        printf("\nResult:NOT PASS");
    }
}
