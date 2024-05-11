#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

int n, m;
vector <int> v;
queue<pair<int, int>> q;

int map[101][101];
bool check[101][101] = {false};
int cnt[101][101] = {1};

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void bfs(int x, int y){
  q.push({x, y});
  check[x][y] = true;

  while(!q.empty())
    {
      int a = q.front().first;
      int b = q.front().second;
      q.pop();
      for(int i=0; i<4; i++)
      {
        int ax = a + dx[i];
        int by = b + dy[i];
        if(0<=ax && 0<=by && ax<n && by<m && ==false map[ax][by]==1 && check[ax][by])
        {
          q.push({ax, by});
          check[ax][by] = true;
          cnt[ax][by] = cnt[a][b] + 1;
        }
      }
    }
}


int main() {

  scanf("%d %d", &n, &m);

  for(int i=0; i<n; i++)
    {
      for(int j=0; j<m; j++)
        {
          scanf("%1d", &map[i][j]);
        }
    }

  bfs(0, 0);

  printf("%d", cnt[n-1][m-1]);

  return 0;
}
