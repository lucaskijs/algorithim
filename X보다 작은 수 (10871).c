#include <stdio.h>
int main() {

  int N, X, i, count = 0, small[100000];

  scanf("%d %d", &N, &X);

  int A[N];
  for(i=0; i<N; i++)
    {
      scanf("%d", &A[i]);
    }
  for(i=0; i<N; i++)
    {
      if(X>A[i])
      {
        small[count] = A[i];
        count++;
      }
    }

  for(i=0; i<count; i++)
    {
      printf("%d ", small[i]);
    }
  
  
  return 0;
}
