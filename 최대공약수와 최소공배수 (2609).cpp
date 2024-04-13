#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

int main(){
  int i, a, b, G=0, L;

  scanf("%d %d", &a, &b);

  for (i=1; i<=min(a, b); i++)
    {
      if(a%i==0 && b%i==0 && G<i)
      {
        G = i;
      }
    }
  
  L = (a*b)/G;

  printf("%d\n%d", G, L);
  
  return 0;
}
