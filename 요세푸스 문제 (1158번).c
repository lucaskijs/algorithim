#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <queue>

using namespace std;

int main() 
{
  queue <int> q;
  int N, K, a, data, i, order=0;

  scanf("%d %d", &N, &K);

  a=K-1;

  for(i=1; i<=N; i++)
    {
      q.push(i);
    }

  printf("<");
  while(!q.empty())
    {
      if(a!=0)
      {
        data = q.front();
        q.pop();
        q.push(data);
        a -= 1;
      }
      else
      {
        if(order==N-1)
        {
          printf("%d", q.front());
        }
        else
        {
          printf("%d, ", q.front());
          order++;
        }
        
        
        q.pop();
        a=K-1;
      }
    }
  printf(">");
  

  return 0;
}
