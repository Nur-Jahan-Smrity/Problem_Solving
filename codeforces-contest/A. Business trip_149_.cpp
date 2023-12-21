//A. Business trip_149_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    ll i,j,n,count=0,sum=0;
    cin>>n;
    ll a[15]={0};

    for(i=0; i<12;i++)
    {
       cin>>a[i];
    }
    sort(a,a+12);
    if(n==0)
       {
            cout<<count<<endl;
            return ;
       }
    for(i=11; i>=0; i--)
    {
       sum+=a[i];
       if(sum<n)
       {
           count++;
       }
       else
       {
            count++;
            break;
       }

    }
    if(sum<n)
        cout<<"-1"<<endl;
    else
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
