#include<stdio.h>
int main()
{
    int a,b,c,p;
printf("\nenter four values");
    printf("a= ");
    scanf("%d",&a);
    printf("\nb= ");
    scanf("%d",&b);
    printf("\nc= ");
    scanf("%d",&c);
    printf("\np= ");
    scanf("%d",&p);
    printf("\nf(x)=ax^2+bx+c\n");
    printf("\nf(p)= %d\n",a*p*p+b*p+c);
}
