#include<stdio.h>
void main()
{
  int a;
  scanf("%d",&a);
  if(a%2==0)
  {
    printf("even");
  }
  else if(a<0)
  {
    printf("invalid");
  }
  else  
  {
    printf("odd");
  }
}
