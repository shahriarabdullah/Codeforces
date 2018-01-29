#include <iostream>

using namespace std;

int main()
{
    long int n,n2,r;
    cin>>n;

    r=n%10;

    if(r<=5){
        n2=n-r;
    } else {
        n2=n+10-r;
    }

    cout << n2;

    return 0;
}
