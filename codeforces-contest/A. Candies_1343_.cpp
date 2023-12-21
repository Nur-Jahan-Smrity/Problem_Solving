//A. Candies_1343_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
//str.find('s')

void solve()
{

    ll i,j,n,sum=0,x=0;
    cin>>n;

    for( i=0; ;i++)
    {
      sum+=pow(2,i);
      if(n%sum==0 && i>0)
      {
          x=n/sum;
          break;
      }
    }
    cout<<x<<endl;
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
