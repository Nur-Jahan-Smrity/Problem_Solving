#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
    long long l1,r1,l2,r2,i,j,flag1=0,flag2=0;
    cin>>l1>>r1>>l2>>r2;
    if((l2>=l1 && l2<=r1) || (l1>=l2 && l1<=r2) )
    {
        if((l2>=l1 && l2<=r1) && (l1>=l2 && l1<=r2) )
            cout<<min(l2,l1)<<endl;
        else if(l2>=l1 && l2<=r1)
            cout<<l2<<endl;
        else if(l1>=l2 && l1<=r2)
            cout<<l1<<endl;
            flag1=1;
    }
    else if((r1>=l2 && r1<=r2) || (r2>=l1 && r2<=r1) )
    {
         if((r1>=l2 && r1<=r2) && (r2>=l1 && r2<=r1) )
            cout<<min(r2,r1)<<endl;
        else if(r1>=l2 && r1<=r2)
            cout<<r1<<endl;
        else if(r2>=l1 && r2<=r1)
            cout<<r2<<endl;
            flag2=1;
    }
    else if(flag1==0)
    {
        cout<<l1+l2<<endl;
    }
   /* else if(flag2==0)
    {
        cout<<r1+r2<<endl;
    }*/
   /* //map<string,int>mp;
    vector<string>v;
    string s[n+5];
    long long countt=0,i,j,flag=0,a[n+5]={0},sum=0,ans=0,minn=INT_MAX,k=0;

    for(i=0;i<n;i++)
    {

        cin>>s[i];
        //v.push_back(s);
    }
    for(i=0;i<n;i++)
    {
         for(j=i+1;j<n;j++)
         {
             for(k=0;k<m;k++)
             {
                 sum+=abs(s[i][k]-s[j][k]);
             }
             minn=min(minn,sum);
             sum=0;
         }
    }
    cout<<minn<<endl;
    */

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();
    //solve();
}
