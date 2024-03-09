#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

int main()
{
  int i, K, a, result=0;
  stack <char> s;
  
  scanf("%d", &K);

  for(i=0; i<K; i++)
    {
      scanf("%d", &a);
      if(a==0)
      {
        s.pop();
      }
      else
      {
        s.push(a);
      }
    }
  while(!s.empty())
    {
      result+=s.top();
      s.pop();
    }
  printf("%d", result);
  return 0;
}
