#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    cin>>a;

    replace(a.begin(),a.end(),'a','b');

    cout << a;


    return 0;
}
