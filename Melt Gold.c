#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int time=0;
    int ct=y;
    while (ct<x){
        time++;
        ct += time;
    }
    printf("%d",time);
}
