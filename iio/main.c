#include <stdio.h>
#include <stdlib.h>

int main()
{
    int roll[5];
    int i,j;

    for(i=0;i<5;i=i+1)
    {
        scanf("%d",&roll[i]);
    }

    for(j=0;j<5;j=j+1)
    {
        printf("%d\n",roll[j]);
    }



    return 0;
}
