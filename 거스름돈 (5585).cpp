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
  int money, count=0;
  
  scanf("%d", &money);

  int k = 1000 - money;

  while(1)
    {
      if(k==0)
        {
          break;
        }
        else if(k>=500)
        {
          k -= 500;
          count++;
        }
        else if(k>=100)
        {
          k -= 100;
          count++;
        }
      else if(k>=50)
      {
        k -= 50;
        count++;
      }
      else if(k>=10)
      {
        k -= 10;
        count++;
      }
      else if(k>=5)
      {
        k -= 5;
        count++;
      }
      else
      {
        k -= 1;
        count++;
      }
    }

  printf("%d", count);
      
  return 0;
}
