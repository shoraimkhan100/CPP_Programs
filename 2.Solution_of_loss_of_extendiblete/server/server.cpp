#include<stdio.h>
#include"server.h"

void demo::scan()
{
    printf("Enter First Number : ");
    scanf("%d",&no1);
    printf("Enter Second Number : ");
    scanf("%d",&no2);
}
void demo::print()
{
    printf("First Value %d\n",no1);
    printf("Second Value %d\n",no2);
}
int demo::addition()
{
    return no1+no2;
}