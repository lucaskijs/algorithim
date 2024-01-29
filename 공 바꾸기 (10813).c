#include <stdio.h>
int main() {

  int N, M;
  int p, q, i, j, blank;

  scanf("%d %d", &N, &M);

  int num[N];

  for(p=0; p<N; p++)
    {
      num[p] = p+1;
    }
  
  for(p=0; p<M; p++)
    {
      scanf("%d %d", &i, &j);

      blank = num[i-1];
      num[i-1] = num[j-1];
      num[j-1] = blank;
    }

  for(p=0; p<N; p++)
    {
      printf("%d ", num[p]);
    }
  
  
  return 0;
}
