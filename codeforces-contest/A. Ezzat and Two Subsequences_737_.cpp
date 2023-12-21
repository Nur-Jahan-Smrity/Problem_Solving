//A. Ezzat and Two Subsequences_737_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0;
    cin>>n;
    //ll a[n+10]={0};
    double x = INT_MIN, y = INT_MAX, z = INT_MAX, store=0;
    int rest = n-1;
    cout<<fixed<<setprecision(9);
    for(i=0; i<n; i++)
    {
        //cin>>a[i];
        double a;
        cin>>a;
        store+=a;
        //finding max element
        x=max(x,a);
    }
    cout<<double(x+(store-x)/rest)<<endl;
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
