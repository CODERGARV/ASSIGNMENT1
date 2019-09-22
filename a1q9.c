#include<stdio.h>
int main()
{
    long int x;
    printf("Deleting the second last digit of your number\nType a number= ");
    scanf("%ld",&x);
    printf("new Number: %ld\n",(x/10)-((x/10)%10)+(x%10));
}
