#include<stdio.h>
int main()
{
    int a,a1,p1,len,br,wi,a2,p2;
    printf("Enter the area of square:");
    scanf("%d",&a);
    a1=a*a;
    p1=4*a;
    printf("\nThe area of the square is %d ",a1);
    printf("\nThe perimeter of the square is %d",p1);
    printf("\nEnter the area of the Rectangle:");
    scanf("%d %d",&len,&br);
    a2=len*br;
    printf("\nThe area of rectangle is %d",a2);
    printf("\nEnter the width:");
    scanf("%d",&wi);
    p2=2*(len+wi);
    printf("\nThe perimeter of rectangle is %d",p2);
}
    
    
    
    

