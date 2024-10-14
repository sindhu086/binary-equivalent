#include<stdio.h>
void main()
{
int decimal_num,binary_num=0,i=1,r;
printf("enter a decimal num");
scanf("%d",&decimal_num);
while(decimal_num !=0)
{
  r=decimal_num%2;
  decimal_num /=2;
  binary_num +=r*i;
  i*=10;
  }
  printf("binary number:%d\n",binary_num);
  }
