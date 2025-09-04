// Write a C program that prints all numbers from 1 to 100 using a for loop.
#include<stdio.h>
int main()
{
  for(int i=1;i<=100;i++)
    {
      if(i%2==0)
      {
        printf("%d\n",i);
      }
    }
}
