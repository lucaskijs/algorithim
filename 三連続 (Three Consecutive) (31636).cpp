#include <cstdio>

using namespace std;

int main(){
  int n, check=0;
  char ox[100001];
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    {
      scanf(" %c", &ox[i]);
      if(ox[i]=='o' && check != 3)
      {
        check++;
      }
      else if(check == 3)
        {
          break;
        }
      else if(ox[i]=='x')
      {
        check = 0;
      }
      //printf("%d ", check);
    }
  if(check>=3)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  

  return 0;
}
