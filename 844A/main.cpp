#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<char> letters;
    string text;
    int difflet,k,sz;

    cin>>text;
    cin>>k;

    for(int i=0;i<text.length();i++){
        letters.insert(text.at(i));
    }

    difflet=letters.size();
    sz=text.size();

    if(k>sz){
        cout << "impossible";
    } else {
        if(difflet<=k){
            cout << k-difflet;
        } else {
            cout << 0;
        }
    }


    return 0;
}
