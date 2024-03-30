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
  int N, i, arr[1002];

  arr[0] = 1;
  arr[1]= 1;

  scanf("%d", &N);

  for(i=2; i<=N; i++)
    {
      arr[i] = (arr[i-1] + arr[i-2])%10007;
    }

  printf("%d", arr[N]);
  
  return 0;
}
