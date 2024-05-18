#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

string num;

int main() {
  int n;
  long long len[100000], mon[100001], result=0;

  scanf("%d", &n);

  for(int i=0; i<n-1; i++)
    {
      scanf("%lld", &len[i]);
    }
  for(int i=0; i<n; i++)
    {
      scanf("%lld", &mon[i]);
    }
  /*for(int i=0; i<n-1; i++)
    {
      printf("%lld ", len[i]);
    }
  for(int i=0; i<n; i++)
    {
      printf("%lld ", mon[i]);
    }*/

  long long min = mon[0];

  for(int i=0; i<n-1; i++)
    {
      if(min>mon[i])
      {
        min = mon[i];
      }

      result += min*len[i];
    }
  
  printf("%lld", result);
      
  return 0;
}
