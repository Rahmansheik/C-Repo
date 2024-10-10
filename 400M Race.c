#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    double sA=400.0/x;
    double sB=400.0/y;
    double sc=400.0/z;
    if(sA>sB&&sA>sc)
    {
    printf("ALICE");
    }
    else if (sB>sA&&sB>sc)
    {
    printf("BOB");
    }
    else
    { 
    printf("CHARLIE");
    }

}