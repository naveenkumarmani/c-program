#include <stdio.h>
int main()
{
  char a[100];
  int i,b,c;
  scanf("%s",a);
  for(i=0;a[i]>0;i++)
  {
    if(a[i]=='X'||a[i]=='Y'||a[i]=='Z'||a[i]=='x'||a[i]=='y'||a[i]=='z')
    {
      b=a[i];
      c=b-23;
      a[i]=c;

    }
    else
    {
      b=a[i];
      c=b+3;
      a[i]=c;
    } 
  }
   printf("%s",a);
}
