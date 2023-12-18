#include<stdio.h>
void sqt(int a)
{
    int c=a*a;
    printf("\nThe square root is %d",c);
}
int main()
{
    int a;
    printf("Enter value of a :");
    scanf("%d",&a);
    sqt(a);
}
