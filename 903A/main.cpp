#include <iostream>

using namespace std;

int main()
{
    int n,t;
    string p;

    cin>>t;

    for(int i=0;i<t;i++){
    p="NO";
    cin>>n;
    for(int s=0;(n-(3*s))>=0;s++){
        if((n-(3*s))%7==0){
            p="YES";
        }
    }

    cout << p << endl;
    }


    return 0;
}
