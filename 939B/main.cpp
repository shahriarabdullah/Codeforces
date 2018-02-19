#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> rem;
    vector<int> num;

    int n,k,inp,result;


    cin>>n>>k;

    while(k--){
        cin>>inp;
        rem.push_back(n%inp);
        num[n%inp]=inp;
    }


    sort(rem.begin(),rem.end());

    cout << rem[0];
    //result=(n-rem[0])/num[rem[0]];

    //cout << result << endl;



    return 0;
}
