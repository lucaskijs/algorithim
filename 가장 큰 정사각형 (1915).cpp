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
int arr[1001][1001];
int result = 0;

int main() {

  scanf("%d %d", &n, &m);

  for(int i=0;i<n; i++)
    {
      for(int j=0; j<m; j++)
        {
          scanf("%1d", &arr[i][j]);
        }
    }

  for(int i=0; i<n; i++)
    {
      for(int j=0; j<m; j++)
        {
          if(arr[i][j]==1 && i>0 && j>0)
          {
            arr[i][j] = min(arr[i-1][j-1], min(arr[i-1][j], arr[i][j-1]))+1;
          }
          if(arr[i][j]>result)
          {
            result = arr[i][j];
          }
        }
    }

  printf("%d", result*result);

  return 0;
}
