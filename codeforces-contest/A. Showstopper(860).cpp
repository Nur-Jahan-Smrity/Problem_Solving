//D:\all codes\cf_1758_A.cpp
//860 div 2
#include<bits/stdc++.h>
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define pi (3.141592653589)
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    long long n,i,j,count=0,k;
    cin>>n;
    ll a[n+10]={0};
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //cin>>k;
    ll b[n+10]={0};
     for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<=b[i])
        {
               swap(a[i],b[i]);
        }

    }

    int mx1 = *max_element(a, a + n) ;
    int mx2 = *max_element(b, b + n) ;
    //cout<<mx1 << " " << mx2 << endl;



    if(mx1 == a[n - 1] && mx2 == b[n - 1]){
        cout<<"YES"<< endl;
    }
    else{
        cout<<"NO"<< endl;
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
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
input
7
3
7 9 7
7 6 9
4
10 10 15 15
10 16 15 15
2
100 99
99 100
1
1
1
9
1 2 3 4 5 6 7 8 9
9 9 9 9 9 9 6 6 6
7
1 1 2 2 1 1 2
1 2 1 2 1 2 1
2
30 4
5 30

output
Yes
No
Yes
Yes
Yes
No
No
*/
