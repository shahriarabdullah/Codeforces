#include <iostream>

using namespace std;

int main()
{
    int n,m,even=0,odd=0,inp;
    cin>>n;
    m=n;

    while(n--){
        cin>>inp;
        if(inp%2==0){
            even++;
        } else {
            odd++;
        }
    }

    if(even>=odd){
        if(even==odd){
            cout << even;
        } else {
            cout << odd;
        }
    } else {
        if(m>1){
        cout << odd;
        } else {
            cout << 0;
        }
    }



    return 0;
}
