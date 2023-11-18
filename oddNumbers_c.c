#include<stdio.h>
int main()
{
    int i,r,sum=0,count=0,av;
    printf("Enter the range:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
       if(i%2!=0)
       {
          printf("\n%d",i);
          sum=sum+i;
          count=count+1;
       }
    }
    printf("\n Sum of odd numbers is %d",sum);
    av=sum/count;
    printf("\n Average of odd number is %d",av);
             
}
    
    
    
    

