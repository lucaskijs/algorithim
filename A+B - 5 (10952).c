#include <stdio.h>

int main() 
{
  int A, B, count=0, sum[99999];
  int i;
  
  while(1)
    {
      scanf("%d %d", &A, &B);
      if(A==0 && B==0)
      {
        break;
      }
      sum[count]=A+B;
      count++;
    }

  for(i=0; i<count; i++)
    {
      printf("%d\n", sum[i]);
    }
  

  return 0;
}
