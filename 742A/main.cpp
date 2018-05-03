#include <iostream>

using namespace std;

int main()
{
    int n,last_dig[]={6,8,4,2};
    cin>>n;
if(n==0){
    cout << 1;
} else {
   cout << last_dig[n%4];
}


    return 0;
}
