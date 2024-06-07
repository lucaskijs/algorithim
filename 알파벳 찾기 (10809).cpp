#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  string str;
  cin >> str;
  int check=0;

  for(int i=97; i<=122; i++)
    {
      for(int j=0; j<str.size(); j++)
        {
          if(int(str[j])==i)
          {
            printf("%d ", j);
            check=1;
            break;
          }
        }
      if(check==0)
      {
        printf("-1 ");
      }
      check = 0;
    }

  return 0;
}
