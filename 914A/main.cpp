#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> sq,non;
    int length,n,inp,non_sq;

    for(int i=1;i<=1000;i++){
        sq.insert(i*i);
    }

    length=sq.size();

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>inp;
        sq.insert(inp);
    if(sq.size()==length+1){
        non.insert(inp);
        length++;
    }
    }

    set<int>::iterator it=non.end();
    cout << *it;




    return 0;
}
