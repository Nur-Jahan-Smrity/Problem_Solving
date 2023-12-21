//B. Ten Words of Wisdom_886_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0;
    cin>>n;
    ll a,b;
    ll x = INT_MAX, y = INT_MAX, z = INT_MIN;

    for(i=1; i<=n; i++)
    {
       cin>>a>>b;
       //mp[b]=a;
       if(a<=10)
       {
           if(z<b)
           {
               z=b;
               count=i;
           }
       }

    }
    cout<<count<<endl;



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
