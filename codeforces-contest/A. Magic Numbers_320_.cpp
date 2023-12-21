//A. Magic Numbers_320_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    ll i,j,n,four=0;
    string s;
    cin>>s;
    n=s.length();
    if(s[0]=='4')
    {
        cout<<"NO"<<endl;
        return ;
    }
    for(i=n-1; i>=0; i--)
    {
        if(s[i]=='4')
        {
            four++;
            for(j=i-1; j>=0; j--)
            {
                if(s[i]==s[j])
                {
                    four++;
                }
                else
                {
                    if(four>=3)
                    {
                        cout<<"NO"<<endl;
                        return ;
                    }
                    break;
                }

            }
            if(four>=3)
            {
                cout<<"NO"<<endl;
                return ;
            }
            four=0;
        }
        if(s[i]!='1' && s[i]!='4')
        {
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;


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
