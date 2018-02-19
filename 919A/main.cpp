#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<long double> product;

    int m,n;
    long double a,b,min_cost;
    cin>>m>>n;


    while(m--){
        cin >> a >> b;
        product.push_back(a/b);
    }

    sort(product.begin(),product.end());

    min_cost=product[0]*(long double)n;

    cout.precision(10);
    cout << min_cost;


    return 0;
}
