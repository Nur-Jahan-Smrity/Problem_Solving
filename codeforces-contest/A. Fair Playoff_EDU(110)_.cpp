//A. Fair Playoff_EDU(110)_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    ll n,i,j,count=0,sum=0,a,b,c,d,min1=0,min2=0,max1=0,max2=0;
    //cin>>n;
    //ll a[n+10]={0};
   // unordered_map<ll,ll>mp;
    cin>>a>>b>>c>>d;
    min1=min(a,b);
    max1=max(a,b);
    min2=min(c,d);
    max2=max(c,d);
    if(min1>max2 || max1<min2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

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
