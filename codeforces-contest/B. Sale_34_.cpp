//B. Sale_34_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
//str.find('s')
void solve()
{

     ll i,j,n,m,sum=0;
    cin>>n>>m;
    ll a[n+5]={0};

    for(i=0; i<n;i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<m;i++)
    {
        if(a[i]<0)
           sum+=a[i];

    }
    cout<<abs(sum)<<endl;
}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //j++;
         solve();
        //cin.ignore();

    }

}

int main()
{


    //int n = sizeof(arr) / sizeof(arr[0]);
    //test();
    solve();
}
/*

*/
