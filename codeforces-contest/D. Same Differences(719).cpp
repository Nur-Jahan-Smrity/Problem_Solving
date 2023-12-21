//D. Same Differences(719).cpp
//number of pairs formula =  n*(n-1)/2 .
//aj−ai=j−i
//aj−j=ai−i

#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    ll n,i,j,count=0;
    cin>>n;
    ll a[n+10]={0};
    unordered_map<ll,ll>mp;

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        mp[a[i]-i]++;
    }
    ll ans=0;
    for(auto it:mp)
    {
        ans+=(it.second*(it.second-1)/2);
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
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*

*/
