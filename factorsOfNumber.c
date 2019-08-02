#include<stdio.h>
int main(void)
{
  int n;
  printf("ENTER NUMBER\n");
  scanf("%d",&n );
  printf("factors of %d are ",n );
  for (size_t i = 1; i <= n; i++)1{
    if(n%i==0)
    {
      printf("%d ",i);
    }
  }
}
