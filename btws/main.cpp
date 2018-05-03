#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,t,sum=0;
    cin>>t;

    for(int k=1;k<=t;k++){
            sum=0;
            cin>>n;
    for(long long int i=1;i<=n;i++){
        for(long long int j=1;i*j<=n;j++){
            sum^=(i*j);
        }
    }
      cout << sum << endl;

    }




}
