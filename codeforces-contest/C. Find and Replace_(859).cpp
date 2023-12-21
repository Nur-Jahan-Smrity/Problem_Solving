//D:\all codes\cf_859_div_4_c_.cpp
//Index_of_each_character
#include<bits/stdc++.h>
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define pi (3.141592653589)
// reverse(s.begin(), s.end());
int A[1000];
int B[1000];
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    long long n,i,j,count=0,a,b,c,even=0,odd=0;

    cin>>n;
    ll ar[n+10]= {0};
    string s;
    cin>>s;

    for(i=0; i<n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            //karon ek ghor por por same alphabet thakte perbe tai (j-i)%2==0 check kora hoise ....
            if(s[i]==s[j] && (j-i)%2!=0)
            {
                count=1;
                break;
            }

        }
        if(count)
            break;
    }

    if(count==1)
        cout<<"NO"<<endl;
    else
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
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
2
7
abacaba
2
aa

*/
