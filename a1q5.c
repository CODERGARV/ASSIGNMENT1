#include<stdio.h>
int main()
{
    long int x;
    printf("Deleting the last 2 digit of your number\n enter a number= ");
    scanf("%ld"&x);
    printf("\nnew number= %ld\n",x/100);
}
