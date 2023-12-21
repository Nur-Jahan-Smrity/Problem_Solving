//A. Twins_160_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    ll i,j,n,sum=0,count=0,sum1=0,half=0;
    cin>>n;
    ll a[n+5]={0};

    for( i=0; i<n;i++)
    {
      cin>>a[i];
      sum+=a[i];
    }
    if(n==2 && a[0]!=a[1])
    {
        cout<<"1"<<endl;
        return ;
    }
    half=sum/2;
    if(sum%2!=0)
        half+=1;

    sort(a,a+n,greater<ll>());
    //cout<<half<<endl;
    for( i=0; i<n;i++)
    {

      if(sum1>half)
      {
         // cout<<"if "<<count<<endl;
          break;
      }
      else
      {
             sum1+=a[i];
             count++;
            // cout<<"else "<<count<<endl;
      }
    }
    cout<<count<<endl;
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
