#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int i,num=0,l;
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<l;i++)
  {
    if(a[i]=='I'||a[i]=='i')
    {
    num+=1;
    }
    else if(a[i]=='V'||a[i]=='v')
    {
    num+=5;
    }
    else if(a[i]=='X'||a[i]=='x')
    {
    num+=10;
    }
  }
  for(i=l;i>0;i--)
  {
  if(a[i]>a[i-1])
 {
 num-=2;
  }
  }
  printf("%d",num);
}
