#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> levels;

    int n,m1,m2,inp;

    cin>>n>>m1;

    while(m1--){
        cin>>inp;
        levels.insert(inp);
    }

    cin>>m2;
    while(m2--){
        cin>>inp;
        levels.insert(inp);
    }

    if(levels.size()==n){
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }

    return 0;
}
