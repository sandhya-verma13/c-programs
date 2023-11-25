#include<stdio.h>
int main()
{
    int ns,gs,de;
    printf("Enter the Gross Salary:");
    scanf("%d",&gs);
    printf("\nEnter the Deduction:");
    scanf("%d",&de);
    ns=gs-de;
    printf("\nThe Net Salary is %d",ns);
}
