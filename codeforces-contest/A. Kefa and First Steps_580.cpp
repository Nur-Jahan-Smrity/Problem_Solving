//A. Kefa and First Steps_580.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    ll i,j,n,sum=0,count=1,sum1=0,half=0,maxx=0;
    cin>>n;
    ll a[n+5]={0};

    for( i=0; i<n;i++)
    {
      cin>>a[i];
    }
    for( i=0; i<n-1;i++)
    {
      if(a[i]<=a[i+1])
      {
            count++;
      }
      else
      {
          maxx=max(count,maxx);
          count=1;
      }
    }
    cout<<max(maxx,count)<<endl;
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
