#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m,inp,stat=0;
    cin>>n;

    m=n;

    vector<int> num;
    while(n--){
            cin>>inp;
        num.push_back(inp);
    }

    for(int i=0;i<m;i++){

        if(num[i]==num[num[num[num[i]-1]-1]-1])
        {
            stat=1;
            break;
        }
    }
    if(stat==1){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
