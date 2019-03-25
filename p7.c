#include<stdio.h>
#include<string.h>
int main()
{
char a[50],t;
int i,l;
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i+=2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("%s",a);
}
