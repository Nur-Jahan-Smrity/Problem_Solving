//string to number converter manually.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;

ll atoi_manually(string s)
{
    ll res=0,size1=s.size();
    for(int i=0;i<size1;i++)
    {
        res=res*10+s[i]-48;
        //cout<<res<<" ";
    }
   // cout<<res<<endl;
   // reverse_number(res,size1);
    return res;
}
void solve()
{

    ll i,j,n;
    string s;
    cin>>s;
    ll result=atoi_manually(s);
    cout<<"After converting to number : "<<endl;
    cout<<result<<endl;

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











//string_to_number and vive-versa using stoi function (but this function can give run time error in some cases ..so try to use manuallly )
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    string l;
    cout<<"enter the string which consist of digit : "<<endl;
    cin>>l;
    int num2 = std::stoi(l);
    cout<<"string converted to integer  : "<<num2<<endl;
    string ss=to_string(num2);
    cout<<"integer converted to string  : "<<ss<<endl;
    cout<<"---------------remember stoi is used only to convert such type of string to integer--------------"<<endl;
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
enter the string which consist of digit :
234345
string converted to integer  : 234345
integer converted to string  : 234345
---------------remember stoi is used only to convert such type of string to integer--------------
*/
