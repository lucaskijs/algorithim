#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++)
    {
      string str;
      cin >> str;
      int l = str.size();
      printf("%c", str[0]);
      printf("%c\n", str[l-1]);
    }
}
