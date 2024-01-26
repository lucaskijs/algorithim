#include <stdio.h>

int main() 
{
  int In, Out, People=0, max=0;
  int i;

  for(i=0; i<4; i++)
    {
      scanf("%d %d", &Out, &In);

      People  = People + In - Out;
      
      if(max<People)
      {
        max = People;
      }
    }

  printf("%d", max);
  
  return 0;
}
