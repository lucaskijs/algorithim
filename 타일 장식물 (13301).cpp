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
  int N, i;
  long long l, arr[81];

  arr[0]=4;
  arr[1]=6;

  scanf("%d", &N);

  for(i=2; i<N; i++)
    {
      arr[i] = arr[i-1]+arr[i-2];
    }

  l = arr[N-1];

  printf("%lld", l);
  
  return 0;
}
