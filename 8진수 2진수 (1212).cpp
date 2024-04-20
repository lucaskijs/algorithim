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
  string s;
  int i;

  cin >> s;
 
  int len = s.length();

  int m[len];

  string p1[8]={"000", "001", "010", "011", "100", "101", "110", "111"};
  string p2[8]={"0", "1", "10", "11", "100", "101", "110", "111"};

  for(i=0; i<len; i++)
    {
      m[i]=s[i]-'0';
    }

  cout << p2[m[0]];
  
  for(i=1; i<len; i++)
  {
    cout << p1[m[i]];
  }
  
  return 0;
}
