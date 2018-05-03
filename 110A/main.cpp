#include <iostream>
#include <string>

using namespace std;

int main()
{
    string number;
    int counts=0;

    cin>>number;

    for(unsigned i=0;i<number.length();i++){
        if(number.at(i)=='4' || number.at(i)=='7'){
            counts++;
        }
    }

    if(counts==4 || counts==7){
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}
