//D. Gold Rush_1829.cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#define nl "\n"
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define debug(x) cout<<#x<<" = "<<x<<nl;
#define pi (3.141592653589)
#define setafter fixed << setprecision
#define NO             cout << "NO" << endl;
#define Yes            cout << "Yes" << endl;
#define No             cout << "No" << endl;
#define yes            cout << "yes" << endl;
#define no             cout << "no" << endl;
#define YES            cout << "YES" << endl;
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
/*
map<ll,bool>vis;
bool recurse(ll n,ll &m)
{

   // 6 = 2 + 4
    //3x = x + 2X

    //n = n/3 + (n/3)*2


    if(n==m)
        return true;
    else
    {
        if(n>m and n%3==0)
        {
            if(!vis.count(n/3))
            {
                vis[n/3]=recurse(n/3,m);
            }
            if(!vis.count((n/3)*2))
            {
                vis[(n/3)*2]=recurse((n/3)*2,m);
            }
            return vis[n/3] || vis[(n/3)*2];
        }
        return false;
    }
}*/
bool check(ll n, ll m)
{
    if (n == m)
        return true;
    if (n < m)
        return false;
    if (n % 3 != 0)
        return false;

    return check(n / 3, m) || check((n / 3) * 2, m);
}
void solve()
{
    ll n, m;
    cin >> n >> m;

    cout << (check(n, m) ? "YES" : "NO") << endl;
}
/*void solve()
{
    long long n,m,i,j,count=0;
    cin>>n>>m;
    //ll a[n+10]= {0};
    //ll x = INT_MAX, y = INT_MAX, z = INT_MAX;
    vis.clear();
    bool res = recurse(n,m);
    if(res)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}*/
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
11
6 4
9 4
4 2
18 27
27 4
27 2
27 10
1 1
3 1
5 1
746001 2984004





YES
YES
NO
NO
YES
YES
NO
YES
YES
NO
NO

*/
