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
  int N, i, arr[100001], max=0;
  scanf("%d", &N);

  int a;
  for(i=0; i<N; i++)
    {
      scanf("%d", &a);
      arr[i]=a;
    }

  sort(arr, arr+N);

  for(i=0; i<N; i++)
    {
      if(max < arr[i] * (N-i))
        {
          max = arr[i] * (N-i);
        } 
    }

  printf("%d", max);
  return 0;
}
