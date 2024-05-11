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
  int n, m, count=1;
  
  scanf("%d %d", &n, &m);

  while(1)
    {
      if(n>m)
      {
        printf("-1");
        break;
      }
      else if((m%10)%2==1 && (m%10)!=1)
        {
          printf("-1");
          break;
        }
      else if(m%2==0)
        {
          m /= 2;
          count++;
          
          if(m==n)
          {
            printf("%d", count);
            break;
          }
        }
      else
      {
        m /= 10;
        count++;

        if(m==n)
        {
          printf("%d", count);
          break;
        }
      }
    }
  

  return 0;
}
