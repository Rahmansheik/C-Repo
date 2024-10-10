#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int ta=10*x;
    int p=(y<ta)? y :ta;
    int e=p*z;
    printf("%d",e);
}