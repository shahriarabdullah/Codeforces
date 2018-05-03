#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int p,y;
    vector<int> num;
    std::vector<int>::iterator it;

    cin>>p>>y;

    for(int i=2;i<=p;i++){
        for(int j=1;i*j<=y;j++)
        {
            num.push_back(i*j);
        }


    }

    return 0;
}
