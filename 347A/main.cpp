#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,swp,arsz;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    arsz=sizeof(a)/sizeof(a[0]);

    sort(a,a+arsz);

    swp=a[n-1];
    a[n-1]=a[0];
    a[0]=swp;

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }





    return 0;
}
