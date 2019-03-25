#include <stdio.h>
int main() 
{
	int l,r,flag=0,count=0;
  int i,j;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++)
	{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		count+=1;
	}
	}
	printf("%d",count);

	return 0;
}
