#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  int n,sum=0;
  scanf("%d",&n);

  for(i=1;i<=n;i=(i+1)*(i+1))
  {
     sum=sum+i;
  }
    printf("The sum is %d",sum);
}
