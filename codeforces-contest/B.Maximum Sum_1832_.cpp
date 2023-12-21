//D:\all codes\cf_1832_B.cpp
//B_ Maximum Sum_1832_.cpp
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int n,k,opt;
    cin>>n>>opt;
    //declared 2 vector and stored 0 initially..
    vector<ll> v(n+1,0),v1(n+1,0);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=1; i<=n; i++)
    {
        v1[i]=v1[i-1]+v[i];
    }
    //partial sum
    /*
     7 2
    1 2 2 3 3 4 6
    erpor

    0 operation min delete krbo r 2-0 mane 2 ta operation max delete krbo.. tahole element baad jabe 4 6..tokhon ans hbe 11..

    erpor 1 ta operation min delete krbo and baki 2-1=1 ta operation max delete krbo .. tokhon 1 2 min er jonno
    r 6 baad jabe max er jonno..tokhon array sum hbe 2+3+3+4=12

    then 2 ta operation min delete krbo r baki 2-2=0 ta operation max delete krbo..
    tokhon baad jabe 1 2 2 3.. array sum hbe 3+4+6=13



    short e bolte gele .. ....
    min operaton         max operation
        0                     2
        1                     1
        2                     0
    */
    ll ans=max(v1[n-opt],v1[n]-v1[opt*2]);
    for(int i=0; i<=opt; i++)
    {
        ans = max(ans,v1[n]-v1[i*2]-(v1[n]-v1[n-opt+i]));
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
/*
6
5 1
2 5 1 10 6
5 2
2 5 1 10 6
3 1
1 2 3
6 1
15 22 12 10 13 11
6 2
15 22 12 10 13 11
5 1
999999996 999999999 999999997 999999998 999999995

*/
