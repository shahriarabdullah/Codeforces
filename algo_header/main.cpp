#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x,c;
    int num[]={0,1,7,4,8,3,6,6,3,6,7};
    int sm[]={1,2,3,4};
    vector<int> num2 (num,num+11);

    //Find
    cin>>x;
    c=count(num,num+11,x);

    cout << x << " appears " << c << " times." << endl;

    //Equal
    if(equal(num2.begin(),num2.end(),num)){
        cout << "All elements are same";
    } else {
        cout << "All elements are not same";
    }

    //Permutation

    do
    {
        cout << sm[0] << sm[1] << sm[2] << sm[3] << endl;
    } while(next_permutation(sm,sm+4));


    return 0;
}
