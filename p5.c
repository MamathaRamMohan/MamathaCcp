#include<stdio.h>
int f1(int n1,int n2)
{
  int a,b,sum;
  a=n1;
  b=n2;
  sum=a+b;
  return sum;
}

int f2(int n1,int n2)
{
  int a,b,dif;
  a=n1;
  b=n2;
  dif=a-b;
  return dif;
}

void main()
{
  int n1,n2,res;
  n1=10;
  n2=15;
  printf("New program in C.\n");
  
  res=f1(n1,n2);
  printf("Sum of 2 numbers is %d\n",res);
  
  res=f2(n1,n2);
  printf("Difference of 2 numbers is %d\n",res);
}
