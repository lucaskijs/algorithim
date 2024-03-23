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
  int N, M, i, a, b;

  scanf("%d %d", &N, &M);
  int arr[N];

  for(i=0; i<N; i++)
    {
      arr[i]=i+1;
    }

  for(i=0; i<M; i++)
    {
      scanf("%d %d", &a, &b);
      reverse(&arr[a-1], &arr[b]);
    }

  for(i=0; i<N; i++)
    {
      printf("%d ", arr[i]);
    }


  return 0;
}
