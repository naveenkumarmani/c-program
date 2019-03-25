#include<stdio.h>
void main()
{
  char a[200];
  int i;
  scanf("%[^\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(i==0)
    {
      if(a[i]>='a'&&a[i]<='z')
      a[i]-=32;
      continue;
    }
    if(a[i]==' ')
    {
      ++i;
        if(a[i]>='a'&&a[i]<='z')
         a[i]-=32;
         continue;
    }
    else 
         {
         if(a[i]>='A'&&a[i]<='Z')
         a[i]+=32;
         }
  }
 
printf("%s",a);
}
