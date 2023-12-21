//A. Eshag Loves Big Arrays_722_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=1;
    cin>>n;
    ll a[n+10]={0};
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll small=a[0];
    for(i=1;i<n;i++)
    {
        if(small==a[i])
            count++;
    }
    cout<<n-count<<endl;
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
