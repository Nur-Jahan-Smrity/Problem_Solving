//B. Colourblindness_817.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0;
    cin>>n;
    string ss,s;
    cin>>ss>>s;
    for(i=0; i<n; i++)
    {
        if((ss[i]=='B' && s[i]=='G') || (s[i]=='B' && ss[i]=='G'))
        {
            continue;
        }
        else if(ss[i]!=s[i])
        {
            cout<<"NO"<<endl;
            return;
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
