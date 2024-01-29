#include <stdio.h>
int main() {

  int i, num, order=0;
  int max=-1000001;
  
  for(i=1; i<=9; i++)
    {
      scanf("%d", &num);
      if(num>max)
      {
        max = num;
        order = i;
      }
    }

  printf("%d\n", max);
  printf("%d", order);
  
  
  return 0;
}
