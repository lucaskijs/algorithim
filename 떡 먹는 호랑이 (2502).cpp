#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

int d, k;
int a[32], b[32];

int main()
{
  scanf("%d %d", &d, &k);
  
  a[1]=1;
  a[2]=0;
  b[1]=0;
  b[2]=1;
  
  for(int i=3; i<=d; i++)
    {
      a[i] = a[i-1] + a[i-2];
      b[i] = b[i-1] + b[i-2];
    }

  /*for(int i=3; i<=d; i++)
    {
      printf("%d번째 : %d, %d\n", i, a[i], b[i]);
    }*/
  
  for(int i=1; i<=k; i++)
    {
      int n = k-(a[d]*i);
      if(n%b[d]==0)
      {
        printf("%d\n", i);
        printf("%d", n/b[d]);
        break;
      }
    }
  
  return 0;
}
