#include<stdio.h>
int main()
{
    long int x;
    printf("The sum of last two digits of your number\nenter a number= ");
    scanf("%ld",&x);
    printf("\nsum= %ld\n",(x%100)%10+(x%100)/10);
}
