//B. Lovely Palindromes_688_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll i,j,n;
    string s,temp="";
    cin>>s;
    temp+=s;
    reverse(s.begin(),s.end());
    temp+=s;
    cout<<temp<<endl;
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
