#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,sz;
    cin>>n;

    int box[n];

    for(int i=0;i<n;i++){
            cin>>box[i];
    }
sz=sizeof(box)/sizeof(box[0]);
    sort(box,box+sz);

    for(int i=0;i<n;i++){
        cout << box[i] << " ";
    }

    return 0;
}
