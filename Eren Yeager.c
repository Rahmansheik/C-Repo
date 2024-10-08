#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if (n % 2 == 0)
      printf("%d",(n/2)*a + (n/2)*b);
    else 
      printf("%d",(n/2)*a+((n/2)+1)*b);
}