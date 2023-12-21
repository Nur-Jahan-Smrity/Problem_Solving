#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
    long long n,a[4]= {0},i,j,count=3;
    cin>>n;
    for(i=1; i<=3 ; i++)
    {
        cin>>a[i];
    }
    while(1)
    {
        if(a[n]>0)
        {
            count--;
            n=a[n];
            //cout<<n<<" ";
        }
        else
            break;

    }
    //cout<<endl;
    //cout<<count<<endl;
    count--;
    if(count==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
/*
4
3
0 1 2
1
0 3 2
2
3 1 0
2
1 3 0

*/
