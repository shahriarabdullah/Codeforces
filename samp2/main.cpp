#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    int num[4];
    int inp;

    for(int i=0;i<4;i++){
        cin >> num[i];
    }

    sort(num,num+4);

    cout << num[2];



    return 0;
}
