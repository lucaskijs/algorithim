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
  long long s,i, sum=0, count=1;

  scanf("%lld", &s);

  while(1)
    {
      sum += count;
      if(sum > s)
      {
        break;
      }
      count++;
    }

  printf("%lld", count-1);
  
  return 0;
}
