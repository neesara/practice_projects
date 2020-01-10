/* Swap between first half and seconf half of a hexa-decimal number */

#include<stdio.h>

int main()
{
  int a,b,c,d;

scanf("%x",&a);
  b=0x00FF;
  c=0xFF00;
 
  b=a & b;
  c=a & c;

  b=b << 8;
  c=a >> 8;
  
  a=b | c;

printf("%x\n",a); 
}
