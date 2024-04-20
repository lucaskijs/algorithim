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
  string str1, str2;
  int i, count=0;

  cin >> str1 >> str2;

  if(str1.length()!=str2.length())
  {
    printf("0");
  }
  else
  {
    for(i=0; i<str1.length(); i++)
      {
        if(str1[i]!=str2[i])
        {
          break;
        }
        else if(str1[i]==str2[i] && str1[i]=='8')
        {
          count++;
        }
      }
    printf("%d", count);
  }

  return 0;
}
