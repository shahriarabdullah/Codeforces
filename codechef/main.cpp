#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,k,n,p,md,md2;
    cin>>a>>k>>n;
    int modulo[k+1];
    int out[n];


    for(int i=0;i<=k;i++){
            if(i==0){
                modulo[i]=k;
            } else {
        modulo[i]=i;
            }
    }

    md=k+1;
    md2=a%md;

    out[0]=modulo[md2];

    for(int i=1;i<n;i++){
        p=i+1;
        md=pow(2,p-1)*(k+1);
        md2=a%md;
        if(md2==0){
            out[i]=k;
        } else if(md2<=md/2){
            out[i]=0;
        } else {
            out[i]=k;
        }

    }

    for(int i=0;i<n;i++){
        cout << out[i] << endl;
    }


    return 0;
}
