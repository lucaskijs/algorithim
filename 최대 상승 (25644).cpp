#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

int main() {
  int m=0, n, i, result=0;
  
  scanf("%d", &n);

  int a[n];
  
  for(i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }

  for(i=n-1; i>=0; i--)
    {
      if(m<a[i])
      {
        m = a[i];
      }

      result = max(result, m-a[i]);
    }

  printf("%d", result);
  
  return 0;
}
