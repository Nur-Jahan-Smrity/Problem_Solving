//A. Even Odds_318_.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    ll i,j,n,m,sum=0,count=1,half=0;
    cin>>n>>m;
    half=(n+1)/2;
    //odd numbers
    // 2-1..........4-1...........6-1............
    // 2*1-1........2*2-1.........2*3-1..........
    // 2*m-1
    if(m<=half)
    {
        cout<<2*m-1<<endl;
    }
    //even numbers
    // 2*1..........2*2...........2*3............
    // 2*(position - middle value)
    else
    {
        cout<<2*(m-half)<<endl;
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
