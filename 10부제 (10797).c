#include <stdio.h>

int main() 
{
  int date, car, count = 0;
  int i;

  scanf("%d", &date);
  for(i=0; i<5; i++)
    {
      scanf("%d", &car);

      if(date == car)
      {
        count++;
      }
    }
  
  printf("%d", count); 
  
  return 0;
}
