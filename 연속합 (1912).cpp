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

  int max1 = dp[0];

  for(i=1; i<k; i++)
    {
      dp[i] = max(dp[i-1]+a[i], a[i]);
      if(max1<dp[i])
      {
        max1 = dp[i];
      }
    }

  printf("%d", max1);
  
  return 0;
}
