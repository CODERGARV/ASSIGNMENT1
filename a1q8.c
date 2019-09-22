#include<stdio.h>
int main()
{
    long int x;
    printf("enter a number= ");
    scanf("%ld",&x);
    x=x+x%10;
    printf("\nnumber + its last digit= %ld\n",x);
}
