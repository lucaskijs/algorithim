#include <cstdio>

using namespace std;

int main(){
  int n, a[101], b[101], min=1001, check=0;

  scanf("%d", &n);

  for(int i=0; i<n; i++)
    {
      scanf("%d %d", &a[i], &b[i]);
      if(a[i]<=b[i] && min>b[i])
      {
        min = b[i];
        check=1;
      }
    }

  if(check==1)
  {
    printf("%d", min);
  }
  else
  {
    printf("-1");
  }

  return 0;
}
