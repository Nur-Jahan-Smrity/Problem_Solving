//cf_1832_A. New Palindrome
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void test()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long n, i, j, count = 0;
        //cin >> n;
        string s1;
        cin >> s1;
       // ll a[n + 10] = {0};
        map<char, int> mp;
        for(i = 0; i < s1.size(); i++)
        {
            mp[s1[i]]++;
        }
        int odd = 0,even=0;
        for(auto it : mp)
        {
            if(it.second>1)
                count++;
            if(it.second % 2 != 0)
                odd++;
            if(it.second % 2 == 0)
                even++;
        }
        if(count>1)
            cout << "YES" << endl;
        else
             cout << "NO" << endl;
        /*if(odd <= 1 && even >= 2 )
        {
             if(s1.size()%2==0 && odd==1)
                 cout << "NO" << endl;
                 else
                 cout << "YES" << endl;
        }
           // cout << "YES" << endl;
        else{

                 cout << "NO" << endl;
        }*/

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test();
    return 0;
}
