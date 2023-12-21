//A. Ilya and Bank Account_313_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
//str.find('s')
void solve()
{

     ll i,j,n;
     string s;
     cin>>s;
     if(s[0]=='-')
     {
         char p=s[s.size()-1];
         s.pop_back();
         char pp=s[s.size()-1];
         s.pop_back();
         s+=min(p,pp);
         if(s.size()==2 && s[1]=='0')
            cout<<"0"<<endl;
         else
          cout<<s<<endl;
     }
     else
        cout<<s<<endl;

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
