#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<long long> v;
    long long count=0,i,j,a[n+2]= {0},p=2,q=3;
    for(i=1; i<n; i++)
    {

        if(i%2==0)
        {
            v.push_back(q);
            //a[i]=q;
            q+=2;
        }
        else
        {
             v.push_back(p);
              //a[i]=p;
            p+=2;
        }
    }
   v.push_back(1);
       for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it<<' ';
     /*a[n]=1;
       for(i=1; i<=n; i++)
       {
           cout<<a[i]<<" ";
       }*/
       cout<<endl;
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

