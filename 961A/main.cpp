#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n,x,inp;

    cin>>n>>x;
    vector<int> grid(n);

    for(int i=0;i<n;i++){
        grid[i]=0;
    }

    while(x--){
        cin>>inp;
        grid[inp-1]++;
    }

    sort(grid.begin(),grid.end());
    cout << grid[0];

    return 0;
}
