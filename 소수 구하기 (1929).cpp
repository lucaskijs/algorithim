#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

int m, n, i, j;

int ar[1000001]={0};

int main() {
  scanf("%d %d", &m, &n);

  for(i=2; i<=n; i++)
    {
      for(j=i*2; j<=n; j+=i)
        {
          ar[j]=1;
        }
    }

  for(i=m; i<=n; i++)
    {
      if(i==1)
      {
        continue;
      }
      else if(ar[i]==0)
      {
        printf("%d\n", i);
      }
    }
  
  return 0;
}
