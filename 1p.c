#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100];
  int i,j,count=0,l=0,m=0,c=0,v=0;
  scanf("%s%s",a,b);
  c=strlen(b);
  for(i=0;a[i]!='\0';i++)
  {
    l++;
  }
   for(i=0;a[i]!='\0';i++)
   {
     for(j=i;b[j]!='\0';j++)
     {
       if(a[i]==b[j])
       count++;
       break;
     }
   }
   if(c>l)
   v=c;
   else
   v=l;
   m=v-count;
   if(m==l)
   printf("yes");
   else
   printf("no");
}
