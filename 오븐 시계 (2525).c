#include <stdio.h>

int main() 
{
  int H, M;
  int m;

  scanf("%d %d", &H, &M);
  scanf("%d",&m);
  
  if(M+m<60)
  {
    M += m; 
  }
  else
  {
    H = H + (m/60);
    M = M + (m%60);
    if(M>=60)
    {
      M -= 60;
      H += 1;
    }
    if(H>=24)
    {
      H -= 24;
    }
  }

  printf("%d %d", H, M);
  

  return 0;
}
