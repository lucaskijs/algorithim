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
  int N, i, a, arr[1000], result=0;

  scanf("%d", &N);

  for(i=0; i<N; i++)
    {
      scanf("%d", &a);
      arr[i]=a;
    }
  
  sort(arr, arr+N);

  for(i=0; i<N; i++)
    {
      for(int j=i; j>=0; j--)
        {
          result += arr[j];
        }
    }

  printf("%d", result);

  return 0;
}
