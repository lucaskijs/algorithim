#include <stdio.h>

int main() 
{
  int N, i, j;

  scanf("%d", &N);

  for(i=N; i>0; i--)
    {
      for(j=i-1; j>0; j--)
        {
          printf(" ");
        }
      for(j=1; j<=N-i+1; j++)
        {
          printf("*");
        }
      printf("\n");
    }
  

  return 0;
}
