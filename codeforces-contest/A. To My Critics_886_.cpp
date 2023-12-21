//A. To My Critics_886_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n=3,i,j,count=0;
    //cin>>n;
    ll a[n+10]={0};
    ll x = INT_MAX, y = INT_MAX, z = INT_MAX;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[n-1]+a[n-2]>=10)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
