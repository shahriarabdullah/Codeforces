#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n,sz;

    cin>>n;

    string inp,new_text;

    while(n--){
    cin>>inp;
    sz=inp.length();

    if(sz>10){
         stringstream ss;
            ss << sz-2;
        new_text=inp.at(0)+ss.str()+inp.at(sz-1);
        cout << new_text << endl;
    } else {
        cout << inp << endl;
    }

    }

    return 0;
}
