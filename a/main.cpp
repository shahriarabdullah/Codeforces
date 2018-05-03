#include<bits/stdc++.h>
using namespace std;



int lapindrome(char *a,int s)
{
    int h1[26];
    int h2[26];
    for(int i=0;i<26;i++)
    {
        h1[i]=0;
        h2[i]=0;
    }
    for(int i=0;i<s/2;i++)
    {
        h1[a[i]-'a']++;
    }

    for(int i=s/2+s%2 ;i<s;i++)
    {
        h2[a[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(h1[i]!=h2[i])
            return 0;
    }
    return 1;
}

int nextp(int *a,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]<1)
        {
            a[i]++;
            return 1;

        }
        else
            a[i]=0;
    }
    return 0;
}

int main()
{
    int a,n,k;
    cin>>a>>n>>k;
    int s[k];
    for(int i=0;i<k;i++)
    {
        s[i]=a%(n+1);
        a/=(n+1);
    }
    cout<<s[0];
    for(int i=1;i<k;i++)
        cout<<" "<<s[i];
    cout<<endl;
    return 0;
}
