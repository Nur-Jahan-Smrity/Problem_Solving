/*
Toph Account Name: returnToSleep_6
https://toph.co/contests/training/x2c4mne
C.Robot Instruction


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
#define vpii vector<pair<char, int> >
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
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n,0),b(n,0),c(n,0),d(n,0);
    for(int i=0; i<n; i++)
    {

        char ch;
        ll x;
        cin>>ch>>x;
        if(ch=='U')
        {
            if(i==0)
            {
                a[i] = x;
                b[i]=0;
                c[i]=0;
                d[i]=0;
            }
            else
            {
                a[i]=a[i-1] + x;
                b[i]=b[i-1];
                c[i]=c[i-1];
                d[i]=d[i-1];
            }
        }
        if(ch=='D')
        {
            if(i==0)
            {
                b[i] =x;
                a[i]=0;
                c[i]=0;
                d[i]=0;
            }
            else
            {
                b[i]=b[i-1] + x;
                a[i]=a[i-1];
                c[i]=c[i-1];
                d[i]=d[i-1];
            }
        }
        if(ch=='L')
        {
            if(i==0)
            {
                c[i] =x;
                b[i]=0;
                a[i]=0;
                d[i]=0;

            }
            else
            {
                c[i]=c[i-1] + x;
                b[i]=b[i-1];
                a[i]=a[i-1];
                d[i]=d[i-1];
            }
        }
        if(ch=='R')
        {
            if(i==0)
            {
                d[i] = x;
                b[i]=0;
                c[i]=0;
                a[i]=0;
            }
            else
            {

                d[i]=d[i-1] + x;
                b[i]=b[i-1];
                c[i]=c[i-1];
                a[i]=a[i-1];
            }
        }

    }
    while(m--)
    {
        ll p,q;
        cin>>p>>q;
        ll y=a[n-1] - b[n-1],x=d[n-1] - c[n-1];
        ll xx =0,xy=0;

        if(p>=2)
        {
            xx =  (a[q-1] - a[p-2]);
            y-=xx;
            xy = (  (b[q-1] - b[p-2]))  ;
            y+=xy;

            ll yx =  (d[q-1] - d[p-2]);
            x-=yx;
            // cout<<x<<' ';
            ll yy = (  (c[q-1] - c[p-2]))  ;
            x+=yy;

        }
        else
        {
            xx =  (a[q-1]  );
            y-=xx;
            //cout<<y<<' ';
            xy = (  (b[q-1] ))  ;
            y+=xy;

            ll yx =  (d[q-1]  );
            x-=yx;
            // cout<<x<<' ';
            ll yy = (  (c[q-1]  ))  ;
            x+=yy;
        }

        //----------------------------
        // cout<<x<<' ';

        // cout<<x<<nl;



        cout  <<x<<' '<< y <<nl;
    }



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
