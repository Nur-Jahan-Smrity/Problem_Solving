#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+5]={0};
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll count=0;
        for(i=1; i<n; i++)
        {
            if(a[i]%a[0]==0)
            {
                count++;
            }
        }
        if(count==n-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
