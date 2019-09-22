#include<stdio.h>
int main()
{
    long int x;
    printf("swaping the last two digits of your number\nenter a number= ");
    scanf("%ld",&x);
    x=(x/100)*100+(x%10)*10+(x/10)%10;
    printf("new number= %ld\n",x);
}
