#include<stdio.h>
int main()
{
    long int x;
    printf("print the last second digit of your number\nenter a number= ");
    scanf("%ld",&x);
    printf("\nlast 2nd digit= %ld\n",(x%100)/10);
}
