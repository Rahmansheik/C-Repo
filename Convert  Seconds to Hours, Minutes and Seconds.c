#include<stdio.h>
int main()
{
    int s,h,m,ts,H,M,S;
    scanf("%d",&ts);
    h=ts/3600;
    m=(ts%3600)/60;
    s=ts%60;
    printf("H:M:S-%d:%d:%d",h,m,s);

}