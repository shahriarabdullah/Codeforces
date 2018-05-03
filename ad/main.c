#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum=0;

    for(i=1;i<=9;i++){
       sum=sum+i;
    }
    printf("The sum is %d",sum);
    return 0;
}
