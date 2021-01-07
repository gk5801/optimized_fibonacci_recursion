#include <stdio.h>
int addSequence(int n,int t0,int t1)
{
  if(n==0)
    return t0;
  if(n==1)
    return t1;
  return addSequence(n-1,t1,t0+t1);
}
int fib(int n)
{
  return addSequence(n,0,1);
}

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=n-1;i>=0;i--)
  printf("%d\n",fib(i));
  return 0;
}