//B. Customising the Track_730_.cpp
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
    ll b[n+10]={0};
    //n=4 .. a1 a2 a3 a4
    // ->  ( |a1-a2|+|a1-a3|+|a1-a4| ) + ( |a2-a3|+|a2-a4| ) + ( |a3-a4| )
    //ll x = INT_MAX, y = INT_MAX, z = INT_MAX;
    ll sum=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll x=sum/n;
    ll y=sum%n;
    ll z=n-y;
    //if it is told to print the array after rearranging then print the comment part ..
    /*
    for(i=0; i<z; i++)
    {
       b[i]=x;
    }
    for(i=z; i<n; i++)
    {
       b[i]=x+1;
    }*/
    cout<<y*z<<endl;
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
