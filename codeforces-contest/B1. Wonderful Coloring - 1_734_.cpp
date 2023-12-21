//B1. Wonderful Coloring - 1_734_.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0,r=0,g=0;
    string s;
    cin>>s;
    map<char,int>mp;
    for(i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second>=2)
        {
            //bakigulo color kora jabe na karon same char k same color diye 2 ber color kora jabe na ..
            r++;g++;
        }
        else{
            if(r>g)
                g++;
            else
                r++;
        }
    }
    cout<<min(g,r)<<endl;
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
