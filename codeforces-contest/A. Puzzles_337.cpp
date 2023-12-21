//A. Puzzles_337.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    ll i,j,n,m,sum=0,count=1,sum1=0,half=0,minn=9999;
    cin>>m>>n;
    ll a[n+5]= {0};

    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    /* for( i=0; i<=(n-m); i++)
     {
         for( j=i; j<i+(m-1); j++)
         {
             sum+=a[j];
         }

    }*/
    for( i=0; i<=(n-m); i++)
    {
        ll jj=a[i+(m-1)]-a[i];
        minn=min(minn,jj);
    }
    cout<<minn<<endl;
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
