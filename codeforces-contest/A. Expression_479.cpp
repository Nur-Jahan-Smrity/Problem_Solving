//A. Expression_479.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0;
    // cin>>n;
    ll a[100]= {0};
    ll x = INT_MAX, y = INT_MAX, z = INT_MAX;
    for(i=0; i<3; i++)
    {
        cin>>a[i];
    }
   // sort(a,a+3);
   int aa=a[0]+a[1]+a[2];
   int bb=a[0]*a[1]*a[2];
   int cc=a[0]+(a[1]*a[2]);
   int dd=a[0]*(a[1]+a[2]);
   int ee=(a[0]*a[1])+a[2];
   int ff=(a[0]+a[1])*a[2];
   cout<<max(aa,max(bb,max(dd,max(ee,ff))));


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
    //test();
    solve();
}
/*

*/
