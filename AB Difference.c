#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ca=a+b;
    int wo=a*b;
    int d = abs(ca-wo);
    printf("%d",d);
}