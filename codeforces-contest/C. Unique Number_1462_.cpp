//C. Unique Number_1462_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    ll i,j,n;
    cin>>n;
    /*
    ( 1 2 3 4 5 6 7 8 9 ) = 45 .. so for 46,47,48,49,50 answer will be -1 ..
    */
    if(n>45)
    {
        cout<<"-1"<<endl;
        return;
    }
    string s="";
    for(i=9;i>=1;i--)
    {
        if(n<=9 && n<=i)// 1 - 9 er moddhe holae oi number ta e print hobe ..
        {
            s+=to_string(n);
            n=0;
            break;
        }
        else
        {
            s+=to_string(i);
            n-=i;
        }
    }
    if(n>0)
    {
        cout<<"-1"<<endl;
        return;
    }
    else
    {
        reverse(s.begin(),s.end());
        cout<<s<<endl;
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
