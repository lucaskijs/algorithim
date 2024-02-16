#include <stdio.h>

int main()
{
  int arr[1001][1001]={0};
  int N, x[100], y[100], h[100], w[100];
  int i, j, k;
  int S[100]={0};

  scanf("%d", &N);

  for(i=0; i<N; i++)
    {
      scanf("%d %d %d %d", &x[i], &y[i], &w[i], &h[i]);
    }
  
  for(i=0; i<N; i++)
    {
      for(j=y[i]+(h[i]-1); j>=y[i]; j--)
        {
          for(k=x[i]; k<=x[i]+(w[i]-1); k++)
            {
              arr[j][k] = i+1;
            }
        }
    }
  
  for(i=0; i<=N; i++)
    {
    for(j=0; j<1001; j++)
      {
        for(k=0; k<1001; k++)
          {
            if(arr[j][k]==i+1)
            {
              S[i] += 1;
            }
          }
      }
    }
  

  for(i=0; i<N; i++)
    {
      printf("%d\n", S[i]);
    }
  
  return 0;
}
