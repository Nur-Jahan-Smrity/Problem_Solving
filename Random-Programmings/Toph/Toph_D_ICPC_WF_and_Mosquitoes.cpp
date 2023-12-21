/*
Toph Account Name: returnToSleep_6
https://toph.co/contests/training/x2c4mne
D.ICPC WF and Mosquitoes


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
     ll arr[3];
     for(int i=0; i<3; i++)
        cin>>arr[i];
     ll ans= arr[1]-arr[0];
     if(arr[2] -arr[1] == ans)
     {

         puts("Arithmetic progression");
     }
     else puts("Geometric progression");



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

    // test();
    solve();
    return 0;
}
