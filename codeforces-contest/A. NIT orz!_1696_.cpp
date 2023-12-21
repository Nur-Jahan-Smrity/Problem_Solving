//A. NIT orz!_1696_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    ll i,j,n,z,ans=0;
    cin>>n>>z;
    ll a[n+5]= {0};
  // AND korle kombe othoba same thakbe .. OR korle berbe othoba same thakbe ...
    for( i=0; i<n; i++)
    {
       cin>>a[i];
       ans=max(ans,(z|a[i]));
    }
    cout<<ans<<endl;
}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //j++;
        solve();
        //cin.ignore();

    }

}

int main()
{


    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*

*/
