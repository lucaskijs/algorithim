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
  int N, arr[5001], i;

  for(i=0; i<5001; i++)
    {
      arr[i]=10000000;
    }

  arr[3] = 1;
  arr[5] = 1;

  for(i=6; i<5001; i++)
    {
      arr[i] = min(arr[i-3], arr[i-5])+1;
    }

  scanf("%d", &N);
  
  if(arr[N]>=10000000)
  {
    arr[N] = -1;
  }
  
  printf("%d", arr[N]);
  
  return 0;
}
