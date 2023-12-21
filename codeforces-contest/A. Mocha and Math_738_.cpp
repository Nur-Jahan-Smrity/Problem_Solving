//A. Mocha and Math_738_.cpp
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
    //shob gulo k AND operation korle j value ta pabo oita always shob theke choto ta hobe othoba onno tar shoman hobe ..
    //4 6 3 2 1
    //4&6&3&2&1 <= 4&6 <= 4&6&3 <= 3&2&1 .. .. and so on ..
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll ans=a[0];
     for(i=1; i<n; i++)
    {
       ans=ans&a[i];
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
4
2
1 2
3
1 1 3
4
3 11 3 7
5
11 7 15 3 7


0
1
3
3

*/
