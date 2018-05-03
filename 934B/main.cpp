#include <iostream>

using namespace std;

int main()
{
    int n;
    string num="";
    cin>>n;

    if(n%2==0){
        for(int i=0;i<n/2;i++){
            num=num+"8";
        }

    } else {
        if(n==1){
            num="4";
        } else {
        for(int i=0;i<(n+1)/2;i++){
                if(i==1){
                    num=num+"0";
                } else {
            num=num+"8";
                }
        }
        }
    }


    if(num=="1000000000000000000" || num.length()<19){
        cout << num;
    } else {
        cout << -1;
    }

    return 0;
}
