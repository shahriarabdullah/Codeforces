#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> word;
    int n,flag=0;
    char inp;

    cin>>n;

    while(n--){
        cin>>inp;
        if(inp=='a' || inp=='e' || inp=='i' || inp=='o' ||inp=='u' ||inp=='y'){
                if(flag==0){
                    word.push_back(inp);
                }
            flag=1;
        } else {
            flag=0;
        }
        if(flag!=1){
            word.push_back(inp);
        }
    }

    for(int i=0;i<word.size();i++){
        cout<<word[i];
    }

    return 0;
}
