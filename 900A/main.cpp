#include <iostream>

using namespace std;

int main()
{
   int point[2];
   int x_p=0;
   int x_n=0;
   int n,m;

   cin>>n;
   m=n;

   while(n--){
    cin>>point[0]>>point[1];
    if(point[0]>0){
        x_p++;
    } else {
        x_n++;
    }
   }

   if(x_p>=m-1 || x_n>=m-1){
    cout << "Yes";
   } else {
       cout << "No";
   }



    return 0;
}

