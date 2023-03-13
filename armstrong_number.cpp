#include <stdio.h>
#include <math.h>
int main (int argc, char *argv[])
{
  int num=0, digit=0, nDigits=0, aNumber=0,aux=0,aux2=0;
  printf("enter the Number: ");
  scanf("%d",& num);
  aux=num;
  aux2=num;
  while (aux>0)
  {
    aux/=10;
    nDigits++;
  }
  while (num>0)
  {
    digit=num%10;
    num/=10;
    aNumber=aNumber+(pow(digit,nDigits));
  }
  printf("%d\n", nDigits);
  printf("%d\n", aNumber);
  if(aNumber==aux2)
  {
    printf("is an armstrong number");
  }
  else
  {
    printf("is not an armstrong number");
  }
  return 0;
}
