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
  int N, a[46], b[46], i, k;

  a[0] = 1;
  a[1] = 0;
  a[2] = 1;
  a[3] = 1;

  b[0] = 0;
  b[1] = 1;
  b[2] = 1;
  

  for(i=4; i<46; i++)
  {
    a[i] = a[i-1] + a[i-2];
  }

  for(i=3; i<46; i++)
  {
    b[i] = b[i-1] + b[i-2];
  }
  
  scanf("%d", &k);
  printf("%d %d", a[k], b[k]);
  
  return 0;
}
