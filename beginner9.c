#include <stdio.h>
int main()
{
  int i,n,k,sum=0,c[100];
  scanf("%d%d",&n,&k);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&c[i]);
  }
    for(i=1;i<=k;i++)
    {
      sum+=c[i];
    }

  printf("%d",sum);
  return 0;
}
