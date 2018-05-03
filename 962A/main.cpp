#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,inp,sum=0,total=0,day;
    vector<int> prob;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
      cin>>inp;
      prob.push_back(inp);
      total+=inp;
    }

    if(total%2!=0)
    {
        total=total+1;
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+prob[i];
        if(sum>=total/2)
        {
            day=i+1;
            i=n;
        }
    }

    cout<< day;
    return 0;
}
