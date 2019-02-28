#include <stdio.h>
int main()
{
  int n,b,c=1;
  scanf("%d%d",&n,&b);
  while(b!=0)
  {
   c*=n;
   b--;
  }
  printf("%d",c);
}
