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
  long long card[100001];
  int i, N;
  
  scanf("%d", &N);
  
  for(i=0; i<N; i++)
    {
      scanf("%lld", &card[i]);
    }
  
  sort(card, card+N);
  
  /*for(i=0; i<N; i++)
  {
    printf("%lld ", card[i]);
  }*/
  
  long long num=card[0];
  int count=1, max=0;

  for(i=1; i<N; i++)
    {
      if(card[i-1]==card[i])
      {
        count++;
        if(max<count)
        {
          num = card[i];
          max=count;
        }
      }
      else
      {
        count=1;
      }
    }
  printf("%lld", num);
  
  return 0;
}
