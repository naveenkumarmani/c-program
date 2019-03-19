#include<stdio.h>
int main()
{
  int a,b,i,k;
  scanf("%d%d",&a,&b);
  for(i=a+1;i<=b;i++)
  {
    k=0;
    if(i%2==0)
    {
    k=1;}
  
    if(k==0)
    {
      printf("%d",i);
      }
  }

}
