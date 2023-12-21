//D:\all codes\lower_&_upper_bound.cpp
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
    long long n,i,j,count=0,need;
    cout<<endl;
    cout<<"enter n & need : "<<endl;
    cin>>n>>need;
    ll a[n+10]= {0};
    cout<<"enter array : "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // lower_bound(arr, arr + n, x) - arr;
    //lower_bound(v.begin(), v.end()) - v.begin();
    cout<<"lower bond  : "<<lower_bound(a,a+n,need)-a<<endl;
    cout<<"upper bond  : "<<upper_bound(a,a+n,need)-a<<endl;
}
void test()
{
    long long t;
    cout<<"test case : "<<endl;
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
//important testcase ......


test case :
6

enter n & need :
6 40
enter array :
10 20 30 39 50 60
10 20 30 39 50 60
lower bond  : 4
upper bond  : 4

enter n & need :
5 6
enter array :
7 9 8 10 30
7 8 9 10 30
lower bond  : 0
upper bond  : 0

enter n & need :
5 5
enter array :
3 4 6 7 8
3 4 6 7 8
lower bond  : 2
upper bond  : 2

enter n & need :
5 6
enter array :
1 3 4 2 0
0 1 2 3 4
lower bond  : 5
upper bond  : 5

enter array :
1 6 6 6 6 1
1 1 6 6 6 6
lower bond  : 0
upper bond  : 2

enter n & need :
6 6
enter array :
1 6 6 6 6 1
1 1 6 6 6 6
lower bond  : 2
upper bond  : 6
*/
