#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  int i,count=0,c,d;
  scanf("%s%s",a,b);
  c=strlen(a);
  d=strlen(b);
  for(i=0;i<=c;i++)
  {
    if(c!=d)
    {
      printf("no");
      break;
    }
    else if(a[i]==b[i])
    {
      count+=0;
    }
    else
    {
      count+=1;
    }
  }
  if(count==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
