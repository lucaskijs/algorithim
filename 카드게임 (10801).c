#include <stdio.h>

int main() 
{
  int A[10], B[10], WinA=0;
  int i;

  for(i=0; i<10; i++)
    {
      scanf("%d", &A[i]);
    }
  for(i=0; i<10; i++)
    {
      scanf("%d", &B[i]);
    }

  for(i=0; i<10; i++)
    {
      if(A[i]>B[i])
      {
        WinA += 1;
      }
      else if(A[i]<B[i])
      {
        WinA -= 1;
      }
    }

  if(WinA >= 1)
  {
    printf("A");
  }
  else if(WinA <= -1)
  {
    printf("B");
  }
  else
  {
    printf("D"); 
  }

  
  return 0;
}
