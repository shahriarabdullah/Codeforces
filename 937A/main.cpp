#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> score;
    int n,inp;

    cin>>n;
    while(n--){
        cin>>inp;
        if(inp!=0){
            score.insert(inp);
        }
    }

    cout << score.size();



    return 0;
}
