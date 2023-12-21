//B. Construct the String_1335_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

     ll i,j,n,a,b;
    cin>>n>>a>>b;


    for( i=0; i<n ;i++)
    {
       cout<<char('a'+i%b);
    }
     cout<<endl;
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
    test();
    //solve();
}
/*

*/
