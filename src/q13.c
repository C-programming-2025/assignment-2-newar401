#include<stdio.h>
int main()
{
  int i=1;
  int sum=0;
  while(i<51)
    {
      if(i%2==0)
      {
        sum=sum+i;
     
      }
      i++;
    }
     printf("%d\n",sum);
  return 0;
}
