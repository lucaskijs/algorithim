#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

int main()
{
  int N, i, S=0;

  scanf("%d", &N);

  int A[N], B[N];

  for(i=0; i<N; i++)
    {
      int a;
      scanf("%d", &a);
      A[i]=a;
    }
  for(i=0; i<N; i++)
  {
    int a;
    scanf("%d", &a);
    B[i]=a;
  }

  sort(A, A+N);
  reverse(&A[0], &A[N]);
  sort(B, B+N);

  for(i=0; i<N; i++)
    {
      S += A[i]*B[i];
    }
  

  printf("%d", S);
  
  return 0;
}
