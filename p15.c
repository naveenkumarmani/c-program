#include<stdio.h>
int main()
{
  char a[100];
  int i,j,count=0,max=0,s;
  scanf("%[^\n]s",a);
  for(i=0;a[i]>0;i++)
  {
    for(j=i+1;a[j]>0;j++)
    {
      if(a[i]==a[j])
      {
        count+=1;
      }
    }
    if(count>max)
    {
      s=a[i];
      max=count;
    }
  }
  printf("%c",s);
}
