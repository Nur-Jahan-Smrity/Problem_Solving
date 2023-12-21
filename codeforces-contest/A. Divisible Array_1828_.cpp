//A. Divisible Array_1828_.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
/*bool lucky(int n)
{

    string s=to_string(n);
    for(auto it:s)
    {
        if(it!='4' && it!='7')
            return false;
        return true;
    }

}*/
void solve()
{
    long long n,i,j,count=0,sum=0;
    string s;
    cin>>n;
   for(i=1;i<=n;i++)
   {
       sum+=i;
   }
    //string to nummber
    int store=sum%n;
    cout<<i+store<<" ";
    for(i=2;i<=n;i++)
   {
       cout<<i<<" ";
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

*/
