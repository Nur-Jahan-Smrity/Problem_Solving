//B. Alphabetical Strings_731_.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    string s;
    ll i;
    cin>>s;
    ll ans=0;
    ll k=-1;
    //cout<<s.find('a')<<endl;
    k=s.find('a');
    if(k==-1)
    {
        cout<<"NO"<<endl;//a pawa jay nai ..
    }
    else
    {
        int i=k-1;//left of a
        int j=k+1;//right of a
        char ch='b';
        while(i>=0 || j<s.size())
        {
            if(s[i]==ch)
            {
                ch++;
                i--;
            }
            else if(s[j]==ch)
            {
                ch++;
                j++;
            }
            else
            {
                ans=1;
                break;
            }
        }
        if(ans==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
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
