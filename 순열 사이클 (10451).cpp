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
  for (int i = 0; i < a[node].size(); i++) {
    int next = a[node][i];
    if (check[next] == false) {
      check[next] = true;
      dfs(next);
    }
  }
}

int main() {
  int t, n, count = 0, cnt[1001] = {0};

  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    memset(check, false, sizeof(check));
    memset(a, false, sizeof(a));
    scanf("%d", &n);
    for (int j = 1; j <= n; j++) {
      int k;
      scanf("%d", &k);
      // printf("(%d, %d)\n", j, k);
      a[j].push_back(k);
      // a[k].push_back(j);
    }
    for (int k = 1; k <= n; k++) {
      if (check[k] == false) {
        count++;
        // printf("i: %d, cnt: %d\n", i, count);
        dfs(k);
      }
    }
    // cnt[i] = count;
    printf("%d\n", count);
    count = 0;
  }
  /*
    for(int i=0; i<t; i++)
      {
        printf("%d\n", cnt[i]);
      }
   */
  return 0;
}
