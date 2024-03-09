#include <stdio.h>

int main() 
{
  int T, A, B, i;

  scanf("%d", &T);

  int result[T];

  for(i=0; i<T; i++)
    {
      scanf("%d %d", &A, &B);
      result[i] = A+B;
    }
  for(i=1; i<=T; i++)
    {
      printf("Case #%d: %d\n", i, result[i-1]);
    }
  

  return 0;
}
