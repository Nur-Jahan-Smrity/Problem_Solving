//A. Case of the Zeros and Ones_556_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

    ll i,j,n,o=0,z=0,ss;

    cin>>n;
    string s;
    cin>>s;
    ss=s.length();

    for( i=0; i<ss;i++)
    {
       if(s[i]=='1')
        o++;
       else
        z++;
    }
    cout<<abs(o-z)<<endl;
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
