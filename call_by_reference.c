#include<stdio.h>
void sum(int*s);
int main()
{
    int x;
    printf("Enter a value :");
    scanf("%d",&x);
    sum(&x);
}
void sum(int*s)
{
    *s=*s+5;
    printf("\nThe value is %d",s);
}

