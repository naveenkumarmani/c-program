#include<stdio.h>
int main()
{
int a[20],b,c,i,j,d;
scanf("%d%d",&b,&c);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=c;j++)
{
d=a[b-1];
for(i=b-1;i>0;i--)
   a[i] = a[i-1];
   a[0] = d;
}
for(i=0;i<b;i++)
{
printf("%d ",a[i]);
}
}
