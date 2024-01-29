#include <stdio.h>
int main() {

  int N, i, num;
  int min=1000001, max=-1000001;

  scanf("%d", &N);
  
  for(i=0; i<N; i++)
    {
      scanf("%d", &num);
      if(num>max)
      {
        max = num;
      }
      if(num<min)
      {
        min = num;
      }
    }

  printf("%d %d", min, max);
  
  
  return 0;
}
