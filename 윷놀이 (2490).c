#include <stdio.h>

int main()
{
  int a, b, c, d, i;
  char result[3];

  for (i=0; i<3; i++)
    {
      scanf("%d %d %d %d", &a, &b, &c, &d);
      if(a+b+c+d == 3)
      {
        result[i] = 'A';
      }
      else if(a+b+c+d == 2)
      {
        result[i] = 'B';
      }
      else if(a+b+c+d == 1)
      {
        result[i] = 'C';
      }
      else if(a+b+c+d == 0)
      {
        result[i] = 'D';
      }
      else if(a+b+c+d == 4)
      {
        result[i] = 'E';
      }
    }

  printf("%c\n", result[0]);
  printf("%c\n", result[1]);
  printf("%c", result[2]);
  
  return 0;
}
