#include <stdio.h>

int main() 
{
  int X, N, A, B, i, result=0;

  scanf("%d", &X);
  scanf("%d", &N);

  for(i=0; i<N; i++)
  {
    scanf("%d %d", &A, &B);
    result += A * B;
  }

 if(X==result)
 {
   printf("Yes");
 }
else
 {
   printf("No"); 
 }
  

  return 0;
}
