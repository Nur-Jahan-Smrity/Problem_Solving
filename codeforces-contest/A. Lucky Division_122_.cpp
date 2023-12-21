//A. Lucky Division_122_.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
bool lucky(int n)
{

    string s=to_string(n);
    for(auto it:s)
    {
        if(it!='4' && it!='7')
            return false;
        return true;
    }

}
void solve()
{
    long long n,i,j,count=0;
    string s;
    cin>>s;

    //string to nummber

    int num2 = std::stoi(s);
    for(i=0; i<s.size(); i++)
    {
       if(s[i]=='4'||s[i]=='7')
        count++;
    }
    // 47  447  4447  4747
    // 74  774  7774  7474  egula shob condition dite hobe evabe korle
    if(count==s.size() || num2%4==0 || num2%7==0 || num2%77==0 || num2%44==0 || num2%47==0 || num2%447==0 || num2%4447==0 || num2%4747==0 || num2%74==0 || num2%774==0 || num2%7774==0 || num2%7474==0 )
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
        //j++;
        solve();
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    //test();
    solve();
}
/*

*/
