#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

int n, m;
vector <int>v;

int main() {
  
  scanf("%d %d", &n, &m);
  for(int i=0; i<n; i++)
    {
      int k;
      scanf("%d", &k);
      v.push_back(k);
    }

  /*for(int i=0; i<n; i++)
    {
      printf("%d", v[i]);
    }*/

  int cnt=0;
  int sum=v[0];
  int l = 0;
  int r = 0;
  
  while(r < n)
    {
      if(sum == m)
      {
        cnt++;
        sum -= v[l];
        l++;
        r++;
        sum += v[r];
      }
      else if(sum < m)
      {
        r++;
        sum += v[r];
      }
      else
      {
        sum -= v[l];
        l++;
      }
    }

  printf("%d", cnt);

  
  return 0;
}
