#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> prev,next;
    int x,n,l,r,sum=0;
    prev.push_back(1);
    cin>>x>>n;

    while(x--){
            cin>>l>>r;
    for(int i=2;i<=n;i++){
        next=prev;
        next.push_back(i);
        next.insert(next.end(),prev.begin(),prev.end());
        prev.erase(prev.begin(),prev.end());
        prev.insert(prev.end(),next.begin(),next.end());
        next.erase(next.begin(),next.end());
    }

    for(int i=l-1;i<=r-1;i++){
        sum+=prev[i];
    }
    cout << sum;
    sum=0;
    }












    return 0;
}
