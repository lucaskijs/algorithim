#include <stdio.h>

int main() 
{
  int Score;

  scanf("%d", &Score);

  if(Score>=90)
  {
    printf("A");
  }
  else if(Score>=80)
  {
    printf("B");
  }
  else if(Score>=70)
  {
    printf("C");
  }
  else if(Score>=60)
  {
    printf("D");
  }
  else{
    printf("F");
  }
  

  return 0;
}
