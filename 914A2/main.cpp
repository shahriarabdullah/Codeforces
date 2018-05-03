#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,not_sq;
    cin>>n;

    double x[n];

    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    sort(x,x+(sizeof(x)/sizeof(x[0])));

    for(int i=0;i<n;i++){
        if(sqrt(x[i])!=(int)(sqrt(x[i]))){
            not_sq=x[i];
        }
    }

    cout << not_sq;


    return 0;
}
