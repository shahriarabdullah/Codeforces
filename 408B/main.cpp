#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main()
{
    map<char,int> seq1,seq2;
    set<char> key1,key2;
    string a,b;
    int area=0;
    getline(cin,a);
    getline(cin,b);

    for(int i=0;i<a.length();i++){
        key1.insert(a.at(i));
    }

    for(int i=0;i<b.length();i++){
        key2.insert(b.at(i));
    }

set<char>:: iterator it;
 for( it = key1.begin(); it!=key1.end(); ++it){
    char key = *it;
    seq1.insert(make_pair(key,0));
 }

 for( it = key2.begin(); it!=key2.end(); ++it){
    char key = *it;
    seq2.insert(make_pair(key,0));
 }

for(int i=0;i<a.length();i++){
    seq1[a.at(i)]=seq1[a.at(i)]+1;
 }

for(int i=0;i<b.length();i++){
    seq2[b.at(i)]=seq2[b.at(i)]+1;
 }

 for(int i=0;i<key1.size();i++)
 {
     if(seq1)
 }

cout << seq1['a'] << endl << seq2['a'];



    return 0;
}
