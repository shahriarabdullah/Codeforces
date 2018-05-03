#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> position;
    vector<int> tm;
    int m,n,inp,time1,time2;

    cin>>n;
    m=n;
    while(m--){
        cin>>inp;
        position.push_back(inp);
    }

    if(n%2==0){
        time1=position[(n-2)/2]-1;
        time2=1000000-position[n/2];
        if(time1>=time2){
            tm.push_back(time1);
        } else {
            tm.push_back(time2);
        }

        time1=position[n-1]-1;
        time2=1000000-position[0];

        if(time1<=time2){
            tm.push_back(time1);
        } else {
            tm.push_back(time2);
        }
    } else {

        time1=position[(n-3)/2]-1;
        time2=1000000-position[(n-1)/2];

        if(time1>=time2){
            tm.push_back(time1);
        } else {
            tm.push_back(time2);
        }

        time1=position[(n-1)/2]-1;
        time2=1000000-position[(n+1)/2];

        if(time1>=time2){
            tm.push_back(time1);
        } else {
            tm.push_back(time2);
        }

        time1=position[n-1]-1;
        time2=1000000-position[0];

        if(time1<=time2){
            tm.push_back(time1);
        } else {
            tm.push_back(time2);
        }


    }

    sort(tm.begin(),tm.end());

    cout<<tm[0];

    return 0;
}
