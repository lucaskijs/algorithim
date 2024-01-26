#include <stdio.h>

int main() 
{
  int A, B, LastB, i;

  scanf("%d", &A);
  scanf("%d", &B);
  LastB = B;
  
  for(i=0; i<3; i++)
    {
      printf("%d\n", A*(LastB%10));
      LastB /= 10;
    }

  printf("%d", A*B);

  return 0;
}
