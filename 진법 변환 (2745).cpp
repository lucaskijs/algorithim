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
  string s;
  int n, sum=0, i;
  
  cin >> s >> n;

  int len = s.length();
  
  for (i=0; i<len; i++)
    {
      int t = len - i - 1;

      if('0' <= s[t] && s[t] <= '9')
      {
        sum = sum + (s[t]-'0') * pow(n, i);
      }
      else
      {
        sum = sum + (s[t]-'A'+10) * pow(n, i);
      }
    }

  printf("%d", sum);
  
  return 0;
}
