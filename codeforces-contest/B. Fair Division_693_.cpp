//B. Fair Division_693_.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    long long n,i,j,count=0;
    cin>>n;
  //  ll a[n+10]= {0};
    ll x,one=0,two=0;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x==1)
            one++;
        else
            two++;

    }
    /*if(two%2==0)
    {
        count++;
    }
    else
    {
        if(one>=(two%2))
        {
            one=one-(two%2);
        }
        else
            count--;
    }
    if(one%2==0)
    {
                count++;
    }
    else
    {
            count--;
    }
    */
    ll a=0;
    if(two%2==1)
        a+=2;
    if(a==0)
    {
        if(one%2==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    else
    {
        if(one>=2)
        {
            if((one-2)%2==0)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
        else
        {
            cout<<"NO"<<"\n";
        }
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
