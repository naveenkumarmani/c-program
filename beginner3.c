#include <stdio.h>
void main()
{
  char A;
  scanf("%c",&A);
  if(A>=65&&A<=90||A>=97&&A<=122)
  {
  if(A=='a'||A=='e'||A=='i'||A=='o'||A=='u')
  {
    printf("vowel");
  }
  else if(A=='A'||A=='E'||A=='I'||A=='O'||A=='U')
  {
    printf("vowel");
  }
  else
  {
    printf("consonent");
  }
}
else
{
  printf("invalid");
}}
