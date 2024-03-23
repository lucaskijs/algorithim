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
  int N, i, S=0, arr[100001];

  scanf("%d", &N);

  int a;
  for(i=0; i<N; i++)
    {
      scanf("%d", &a);
      arr[i]=a;
    }

  sort(arr, arr+N);
  reverse(&arr[0], &arr[N]);

  for(i=0; i<N; i++)
    {
      if(N<=2)
      {
        S += arr[i];
      }
      else
      {
        if(i % 3 == 2)
        {
          continue;
        }
        else
        {
          S += arr[i];
        }
      }
    }

  printf("%d", S);
  
  return 0;
}
