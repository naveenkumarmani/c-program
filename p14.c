#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,n,s;
scanf("%d",&s);
scanf("%s",a);
n=strlen(a);
for(i=0;i<=n;i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
a[i]='+';
}
}
for(i=n;i>=0;i--)
{
if(a[i]!='+')
{
  printf("%c",a[i]);
}
}
}
