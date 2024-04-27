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

char map[101][101];
bool check[101][101] = {false};

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int n;

void dfs(int x, int y) {
  check[x][y] = true;
  
  for(int i=0; i<4; i++)
    {
      int next_x = x+dx[i];
      int next_y = y+dy[i];
    
      if(next_x<0 || next_x>=n || next_y<0 ||next_y>=n)
      {
        continue;
      }
      if(check[next_x][next_y]==false)
      {
        if(map[x][y]==map[next_x][next_y])
        {
          dfs(next_x, next_y);
        }
      }
    }
}

int main() {
  int cnt=0;
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    {
      scanf("%s", map[i]);
    }
  
  for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
        {
          if(check[i][j]==false)
          {
            dfs(i, j);
            cnt++;
          }
        }
    }
  printf("%d ", cnt);

  memset(check,false,sizeof(check));
  cnt=0;

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
      {
        if(map[i][j]=='G')
        {
          map[i][j]='R';
        }
      }
  }
  
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
      {
        if(check[i][j]==false)
        {
          dfs(i, j);
          cnt++;
        }
      }
  }
  printf("%d", cnt);

  return 0;
}
