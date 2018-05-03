#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    map<char,int> seq1;
    map<char,int> seq2;

    int area=0;

    for(char letter='a';letter!='z';letter++){
        seq1[letter]=0;
        seq2[letter]=0;
    }

    string a,b;
    getline(cin,a);
    getline(cin,b);

    for(int i=0;i<a.length();i++){
        seq1[a.at(i)]+=1;
    }

    for(int i=0;i<b.length();i++){
        seq2[b.at(i)]+=1;
    }

    for(char letter='a';letter!='z'+1;letter++){

        if(seq2[letter]<=seq1[letter])
        {
            area+=seq2[letter];
        } else {
            if(seq1[letter]!=0){
            area+=seq1[letter];
            } else {
                area=0;
                break;
            }
        }
    }

    if(area!=0){
        cout << area;
    } else
    {
        cout << "-1";
    }

    return 0;
}
