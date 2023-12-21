/*
Toph Account Name: returnToSleep_6
https://toph.co/contests/training/x2c4mne
A.Quiz


=> _cp_365470
*/
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long
#define ld long double
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
#define vpii vector<pair<int, int>>
#define mpi map<int, int>
#define mpl map<ll, ll>
#define mpsi map<string, ll>
#define maap(x, y) make_pair(x, y)
#define rall(x) x.rbegin(), x.rend()
#define nl "\n"
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define YES cout << "YES" << endl;
int Ceil(int a, int b)
{
    return (a + b - 1) / b;
}
int Floor2(int a, int b)
{
    return floor((double)a / (double)b);
}
ll Max(ll a, ll b)
{
    return (a >= b ? a : b);
}

void solve()
{
     ll n;
     string a,b;
     cin>>n>>a>>b;
     int c=0;
     ll x =  b.size() - n;
     for(int i=0; i<b.size(); i++)
     {
         if(a[i] == b[i])
            c++;
     }
     ll ans=0;
     if(n < c)
     {
         ans = x + n;
         ll y = c - n;
         ans-=y;

     }
     else{
        ans = x + c;
     }
     cout<<ans<<nl;


}
void test()
{
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
}

int32_t main()
{
    //fast;

    test();
     //solve();
    return 0;
}
