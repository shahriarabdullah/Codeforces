#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int n,counts_highest=0,counts_highest2=0,sh;
    set<int> nums;
    cin>>n;

    int card[n],j=n-1;
    for(int i=0;i<n;i++){
        cin>>card[i];
        nums.insert(card[i]);
    }

    if(nums.size()>1){
    sh=*++nums.rbegin();
    } else {
        sh=0;
    }

    sort(card,card+(sizeof(card)/sizeof(card[0])));

    while(card[j]==card[n-1] || card[j]==sh){
            if(card[j]==card[n-1]){
        counts_highest++;
            } else {
                counts_highest2++;
            }
        j--;
    }


    if(counts_highest%2==0){
            if(counts_highest2%2==1){
                cout << "Conan";
            } else {
        cout << "Agasa";
            }
    } else {
        cout << "Conan";
    }


    return 0;
}
