#include <stdio.h>
int main() {

  int N, M;
  int o, p, q, i, j, k;

  scanf("%d %d", &N, &M);

  int num[N];

  for(p=0; p<N; p++)
    {
      num[p] = 0;
    }
  
  for(p=0; p<M; p++)
    {
      scanf("%d %d %d", &i, &j, &k);
      for(q=i-1; q<j; q++)
        {
          num[q] = k;
        }
    }

  for(p=0; p<N; p++)
    {
      printf("%d ", num[p]);
    }
  
  
  return 0;
}
