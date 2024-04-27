#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int node) {
  check[node] = true;
  //printf("%d ", node);
  for(int i=0; i<a[node].size(); i++)
    {
      int next = a[node][i];
      if(check[next] == false)
      {
        check[next]=true;
        dfs(next);
      }
    }
}

int main() {
  int n, m, i, count=0;

  scanf("%d %d", &n, &m);

  for(i=0; i<m; i++)
    {
      int u, v;
      scanf("%d %d", &u, &v);
      a[u].push_back(v);
      a[v].push_back(u);
    }
  dfs(1);
  for(i=1; i<=n; i++)
    {
      if(check[i]==true)
      {
        count++;
      }
    }

  printf("%d", count-1);

  return 0;
}
