#include <stdio.h>
int main() {

  int num, nums[10], i, j, count=0;

  for(i=0; i<10; i++)
    {
      scanf("%d", &num);
      nums[i] = num%42;
      ///*테스트*/printf("(%d)\n", nums[i]);
    }

  for(i=0; i<10; i++)
    {
      for(j=0; j<10; j++)
        {
          if(nums[i]==-1 ||  nums[j]==-1)
          {
          }
          else if(i != j &&  nums[i] == nums[j])
          {
            nums[i] = -1;
          }
        }
    }

  for(i=0; i<10; i++)
    {
      ///*테스트*/printf("\n-%d-",nums[i]);
      if(nums[i] != -1)
      {
        count++;
      }
    }

  printf("%d", count);


  return 0;
}
