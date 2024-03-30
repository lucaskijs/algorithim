#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

struct Student
{
  int country;
  int num;
  int score;
};

bool cmp(const Student left, const Student right)
{
  return left.score > right.score;
}

int main()
{

  int i, N;

  scanf("%d", &N);

  Student data[101];
  for (i=0; i<N; i++)
    {
      int a, b, c;
      scanf("%d %d %d", &a, &b, &c);
      data[i].country = a;
      data[i].num = b;
      data[i].score = c;
    }

  sort(&data[0], &data[0]+N, cmp);

  /*for(i=0; i<N; i++)
    {
      printf("%d ", data[i].score);
    }*/
  
  int count[N];
  
  for(i=0; i<N; i++)
    {
      count[i]=0;
    }

  int win=0;
  
  for(i=0; i<N; i++)
    {
      win++;
      count[data[i].country-1]++;
      if(count[data[i].country-1]>=3)
      {
        win--;
      }
      else if(win==4)
      {
        break;
      }
      else
      {
        printf("%d %d\n", data[i].country, data[i].num);
      }
      
    }
  
  return 0;
}
