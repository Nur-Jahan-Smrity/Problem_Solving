//A. Array Coloring_891_.cpp
#include<bits/stdc++.h>
  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0;
    cin>>n;
    ll a[n+10]={0};
    ll x = INT_MAX, y = INT_MAX, z = INT_MAX;
     ll sum=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    //ll sum=0;
    if(sum%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
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
/*

*/
