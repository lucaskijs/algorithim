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
  int N, arr[11], i, T;

  arr[0]=0;
  arr[1]=1;
  arr[2]=2;
  arr[3]=4;
  
  for(i=4; i<11; i++)
    {
      arr[i] = arr[i-3] + arr[i-2] + arr[i-1];
    }

  scanf("%d", &T);

  int result[T];
  
  for(i=0; i<T; i++)
    {
      scanf("%d", &N);
      printf("%d\n", arr[N]);
    }

  return 0;
}
