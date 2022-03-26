#include <stdio.h>

int main(void) 
{
  int n=0;
  while(n%7 !=4 || n%5 !=3 || n%3 !=2)
  {
    n++;
  } 
  printf("%d",n);
  return 0;
}
