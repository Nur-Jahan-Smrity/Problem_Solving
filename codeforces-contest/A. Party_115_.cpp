//A. Party_115_.cpp
//dfs use kora hoise to find max  depth ..
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

     ll i,j,n;
    cin>>n;
    ll a[n+5]={0};

    for(i=1; i<=n;i++)
    {
       cin>>a[i];
    }
    int ans = 1;
     for(i=1; i<=n;i++)
    {
       int node = a[i];
       int dep = 1;
       while(node != -1 )
       {
           node = a[node];
           dep++;
       }
       ans=max(ans,dep);
    }
    cout<<ans<<endl;
    return;

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
    //test();
    solve();
}
/*

*/
