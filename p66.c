#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int i,j,flag=1,c,d,l1,l2;
scanf("%s%s",a,b);
l1=strlen(a);
l2=strlen(b);
if(l1==l2)
{
for(i=0;i<l1;i++)
{
for(j=0;j<l2;j++)
{
c=a[i]-a[j];
d=b[i]-b[j];
if(c==d)
{
flag=0;
}
else
{
flag=1;
break;
}
}
}
}
if(flag==1)
{
printf("no");
}
else
{
printf("yes");
}
}

