#include<stdio.h>
int main()
{
    char ch;
    int c;
    scanf("%c %d",&ch,&c);
    int np=(ch-'a'+c) % 26;
    char r='a'+np;
    printf("%c",r);
}