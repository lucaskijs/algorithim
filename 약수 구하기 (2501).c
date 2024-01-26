#include <stdio.h>

int main() 
{
  int N, K, i=1, count=0, result;

  scanf("%d %d", &N, &K);
  
  while(1)
    {
      if(N%i==0)
      {
        count++;
        if(count==K)
        {
          result = i;
          break;
        }
      }
      if(i>N)
      {
        result = 0;
        break;
      }
      i++;
    }

  printf("%d", result);

  
  return 0;
}
