#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,l,b;
    vector<int> bucket;
    cin>>n>>l;

    for(int i=0;i<n;i++){
            cin>>b;
       bucket.push_back(b);
    }

   sort(bucket.begin(),bucket.end());
   for(int i=0;i<n;i++){
    if(l%bucket[i]==0){
        b=bucket[i];
    }
   }

   cout << l/b;

    return 0;
}
