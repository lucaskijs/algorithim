#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  int n, result=0;
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    {
      int k;
      scanf("%1d", &k);
      result += k;
    }
  printf("%d", result);
}
