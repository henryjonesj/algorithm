#include <stdio.h>

const int r = 1;
const int c = 10;

int* schedule(int* week, int n)
{
  int i;
  for(i=0;i<n;i++)
    printf("%d\n", week[i]);
}

int main()
{ 
  int n = 10;
  int test[10]= {11, 9, 9, 12, 12, 12, 12, 9, 9, 11};
  schedule(test, n);
  //printf("%d\t%d\n", r, c);
}
