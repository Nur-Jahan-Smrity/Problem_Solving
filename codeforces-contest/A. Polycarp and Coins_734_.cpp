//A. Polycarp and Coins_734_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    ll n,i,j,store=0;
    cin>>n;
    ll one =0 , two=0 ;
    one=n/3;
    two=n/3;
    store=n%3;
    if(store==2)
        two++;
    if(store==1)
        one++;
    cout<<one<<" "<<two<<endl;
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
6
1000
30
1
32
1000000000
5
*/
