#include <stdio.h>

int main() 
{
  int T, A, B, i;

  scanf("%d", &T);

  int result[T], A1[T], B1[T];

  for(i=0; i<T; i++)
    {
      scanf("%d %d", &A, &B);
      A1[i] = A;
      B1[i] = B;
      result[i] = A+B;
    }
  for(i=0; i<T; i++)
    {
      printf("Case #%d: %d + %d = %d\n", i+1, A1[i], B1[i], result[i]);
    }
  

  return 0;
}
