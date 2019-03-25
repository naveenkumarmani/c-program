#include<stdio.h>
int main()
{
  int a,s,r,sum=0;
  scanf("%d",&a);
  while(a>0)
  {
    r=a%10;
    s=r*r;
    sum+=s;
    a=a/10;
  }
  printf("%d",sum);
}
