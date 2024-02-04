#include <stdio.h>

int main() 
{
  int A[10], B[10], PointA=0, PointB=0;
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
        PointA += 3;
      }
      else if(A[i]<B[i])
      {
        PointB += 3;
      }
      else if(A[i]==B[i])
      {
        PointA += 1;
        PointB += 1;
      }
    }

  printf("%d %d\n", PointA, PointB);
  
  if(PointA > PointB)
  {
    printf("A");
  }
  else if(PointA < PointB)
  {
    printf("B");
  }
  else
  {
    for(i=9;i>=0;i--)
      {
        if(A[i]==B[i])
        {
          if(i==0)
          {
            printf("D");
            break;
          }
          continue;
        }
        else if(A[i]>B[i])
        {
          printf("A");
          break;
        }
        else
        {
          printf("B");
          break;
        }
      }
  }


  return 0;
}
