//A. Exciting Bets_730_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll sub=abs(n-m);
    if(n==m)
    {
        cout<<"0 0"<<endl;
        return;
    }
    ll x=n%sub;
    ll y=m%sub;
    if(x!=y)
        cout<<"0 0"<<endl;
    else
    {
        ll ans=min(sub-x,x);
        cout<<sub<<" "<<ans<<endl;
    }
}
void test()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test();
}
/*

*/
