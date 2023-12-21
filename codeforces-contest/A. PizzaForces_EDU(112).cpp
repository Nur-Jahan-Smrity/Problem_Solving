//A. PizzaForces_EDU(112).cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
   long long n,i,j,count=0;
   cin>>n;
  //  ll a[n+10]={0};
   // ll x = INT_MAX, y = INT_MAX, z = INT_MAX;
   ll x=n/6;
   ll y=n%6;
   if(n<=6)
   {
        cout<<"15"<<endl;
   }
   else if(y==0)
   {
       cout<<x*15<<endl;
   }
   else if(y<=2)
   {
       cout<<x*15+5<<endl;
   }
   else if(y<=4)
   {
       cout<<x*15+10<<endl;
   }
   else
   {
       cout<<(x+1)*15<<endl;
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
