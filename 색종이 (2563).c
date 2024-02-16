#include <stdio.h>

int main()
{
  int arr[100][100]={0};
  int N, i, x[100], y[100];
  int j, k, S=0;

  scanf("%d", &N);

  for(i=0; i<N; i++)
    {
      scanf("%d %d", &x[i], &y[i]);
    }
  for(i=0; i<N; i++)
    {
      for(j=y[i]+9; j>y[i]-1; j--)
        {
          for(k=x[i]-1; k<x[i]+9; k++)
            {
              arr[j][k] = 1;
            }
        }
    }
  
  /*
  printf("\n\n");
  for(j=0; j<100; j++)
  {
    for(k=0; k<100; k++)
      {
        if(arr[j][k]==1) printf("%d ", arr[j][k]);
      }
    printf("\n");
  }
  printf("\n\n");
  */
  
  for(j=0; j<100; j++)
    {
      for(k=0; k<100; k++)
        {
          if(arr[j][k]==1)
          {
            S += 1;
          }
        }
    }

  printf("%d", S);
  
  return 0;
}
