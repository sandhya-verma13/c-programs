#include<stdio.h>
void area(int a)
{
    a=a*a;
    printf("\nThe area is %d",a);
}
int main()
{
    int s;
    printf("Enter value:");
    scanf("%d",&s);
    area(s);
}
