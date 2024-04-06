#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

int main()
{
  int k, i;

  scanf("%d", &k);

  int a[k], dp[k];
  
  for(i=0; i<k; i++)
    {
      scanf("%d", &a[i]);
    }

  dp[0] = a[0];
  dp[1] = max(a[0]+a[1], a[1]);
  dp[2] = max(a[0]+a[2], a[1]+a[2]);

  for(i=3; i<k; i++)
    {
      dp[i] = max(dp[i-2]+a[i], a[i-1]+a[i]+dp[i-3]);
    }

  printf("%d", dp[k-1]);
  
  return 0;
}
