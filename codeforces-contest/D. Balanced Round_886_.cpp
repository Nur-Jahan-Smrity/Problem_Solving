//D. Balanced Round_886_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,m,i,j,count=0;
    cin>>n>>m;
    ll a[n+10]={0};
    ll x = INT_MAX, y = INT_MAX, z = 0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]<=m)
        {
            count++;
            z=max(z,count);
        }
        else
            count=0;
    }
    cout<<n-(z+1)<<endl;

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
