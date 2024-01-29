#include <stdio.h>

int main()
{
  int N, v, i, count;

  scanf("%d", &N);

  int Nums[N];


  for(i=0; i<N; i++)
  {
    scanf("%d", &Nums[i]);
  }

  scanf("%d", &v);

  for(i=0; i<N; i++)
  {
    if(Nums[i] == v)
    {
      count++;
    }
  }

printf("%d", count);


  return 0;
}
