//C Challenging Cliffs_(726).cpp


#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    ll n,i,j,count=0;
    cin>>n;
    ll a[n+10]={0};
    //map<ll,ll>mp;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans=0,minn=INT_MAX,index1=0,index2=0;
    for(i=0; i<n-1; i++)
    {
        if(minn>a[i+1]-a[i])
        {
            minn=a[i+1]-a[i];
            index1=i;
            index2=i+1;
        }
    }
  //  cout<<index1<<" "<<index2<<endl;
    //exceptional when n==2
    if(n==2)
    {
        cout<<a[0]<<" "<<a[1]<<endl;
    }
    else{
        for(i=index2;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        for(i=0;i<= index1;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
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
2
4
4 2 1 2
2
3 1

*/
