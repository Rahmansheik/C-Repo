#include<stdio.h>
int main()
{
    int m,h,r;
    scanf("%d",&m);
    h=m/60;
    r=m%60;
    printf("%d Hour(s) %d Minute(s)",h,r);
}