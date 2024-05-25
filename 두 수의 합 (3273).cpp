#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

int main() {
  int n, m;
  vector <int>v;

  scanf("%d", &n);
  for(int i=0; i<n; i++)
    {
      int k;
      scanf("%d", &k);
      v.push_back(k);
    }
  scanf("%d", &m);

  /*for(int i=0; i<n; i++)
    {
      printf("%d", v[i]);
    }*/

  sort(v.begin(), v.end());

  int cnt=0;
  int l = 0;
  int r = n-1;
  int mid = (l+r)/2;
  
  while(l < r)
    {
      if(v[l]+v[r] == m)
      {
        cnt++;
        l++;
        r--;
      }
      else if(v[l]+v[r] > m)
      {
        r--;
      }
      else
      {
        l++;
      }
    }

  printf("%d", cnt);

  
  return 0;
}
