#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,fib1=1,fib2=1,fib;
    cin>>n;

    vector<char> name;

    for(int i=0;i<n;i++){
        name.push_back('o');
    }

    name[0]='O';

    for(fib=0;fib<=n;)
    {
        if(fib!=0){
            name[fib-1]='O';
        }
        fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
    }

    for(int i=0;i<n;i++){
        cout << name[i];
    }


    return 0;
}
