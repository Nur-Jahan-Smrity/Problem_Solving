#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+5],i,j,f[n+5]={0};
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
       f[a[i]]=i;
    }
    sort(a+1,a+n+1);
    cout<<f[a[1]];
    for(i=2;i<=n;i++)
    {
        cout<<" "<<f[a[i]];
    }
    cout<<endl;
    return 0;
}
