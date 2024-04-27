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

int map[26][26];
bool check[26][26] = {false};

vector <int> v;
queue<pair<int, int>> q;

int n;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int cnt = 0;

void bfs(int x, int y) {
  q.push({x, y});
  check[x][y]=true;
  cnt++;

  while(!q.empty())
    {
      int a = q.front().first;
      int b = q.front().second;
      q.pop();
      for(int i=0; i<4; i++)
        {
          int ax = a + dx[i];
          int by = b + dy[i];
          if(0<=ax && 0<=by && ax<n && by<n && map[ax][by]==1 && check[ax][by]==false)
          {
            q.push({ax, by});
            check[ax][by]=true;
            cnt++;
          }
        }
    }
  v.push_back(cnt);
  cnt=0;
}

int main() {
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
        {
          scanf("%1d", &map[i][j]);
        }
    }
/*
  printf("\n\n");
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
      {
        printf("%1d", map[i][j]);
      }
    printf("\n");
  }
  printf("\n\n");
  */

  for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
        {
          if(map[i][j] == 1 && check[i][j] == false)
          {
            bfs(i, j);
          }

        }
    }

  sort(v.begin(), v.end());

  printf("%lu\n", v.size());

    for(int i=0; i<v.size(); i++)
    {
      printf("%d\n", v[i]);
    }

   return 0;
}
