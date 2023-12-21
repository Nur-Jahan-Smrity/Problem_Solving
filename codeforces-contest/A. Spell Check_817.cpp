//A. Spell Check_817.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0;
    cin>>n;
    string ss,s="Timur";
    cin>>ss;
    sort(ss.begin(),ss.end());
    sort(s.begin(),s.end());
    if(ss==s)
         cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    //int pos = s.find(ch);

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
