#include <stdio.h>
int main() {

  int N[30], n, i;

  for(i=0; i<30; i++)
    {
      N[i] = i+1;
    }

  for(i=0; i<28; i++)
    {
      scanf("%d", &n);
      N[n-1] = 0;
    }

  for(i=0; i<30; i++)
    {
      if(N[i]!=0)
      {
        printf("%d\n", N[i]);
      }
    }
  
  
  return 0;
}
