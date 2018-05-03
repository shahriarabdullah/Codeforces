#include <iostream>

using namespace std;

int main()
{
    int n,counter=0,calc;
    cin>>n;

    for(int i=1;i<=n;i++){
        calc=n-i;
        if(calc%i==0){
            counter++;
        }
    }

    cout << counter-1;


    return 0;
}
