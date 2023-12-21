//B. Pleasant Pairs_728_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0;
    cin>>n;
    ll a[n+3]={0};
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=2; i<=n; i++)
    {
        ll b=i+i-1;
        if(a[i]>b)
            continue;
        ll c=(b%a[i])+1;
        ll d=i-c;
        while(d>=1)
        {
            if(a[i]*a[d]==d+i)
                ans++;
            d-=a[i];
        }
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
