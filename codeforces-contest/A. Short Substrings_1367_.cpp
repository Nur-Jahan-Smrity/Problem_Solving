//A. Short Substrings_1367_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
//transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
{

    ll i,j,n;
    string s;
    cin>>s;
    string temp = "";
    temp += s[0];
    for(int i = 1; i < s.size() - 1; i += 2){

        temp += s[i];
    }

    temp += s[s.length() - 1];


    cout<< temp << endl;

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
