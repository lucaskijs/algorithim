#include <cstdio>

using namespace std;

int main(){
  int n, h[101], w[101], max=-1;

  scanf("%d", &n);

  for(int i=0; i<n; i++)
    {
      scanf("%d %d", &h[i], &w[i]);
      if(max<(h[i]*w[i]))
      {
        max = h[i]*w[i];
      }
    }

  printf("%d", max);

  return 0;
}
