#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
//int j=0;
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
void solve()
{
    //map<string,int>mp;

    long long count=0,i,j;
    string s1="",s2="",s3="",s4="",s5="",s6="",s7="",s8="";



    for(int i=0;i<8;i++)
    {
        string a;
        cin>>a;
        s1+=a[0];
        s2+=a[1];
        s3+=a[2];
        s4+=a[3];
        s5+=a[4];
        s6+=a[5];
        s7+=a[6];
        s8+=a[7];
        if(a=="RRRRRRRR" )
            count=1;
       // else if( a=="BBBBBBBB")
        //    count=2;
    }
     for(i=0;i<1;i++)
     {

        if(s1=="BBBBBBBB" || s2=="BBBBBBBB" || s3=="BBBBBBBB" || s4=="BBBBBBBB" || s5=="BBBBBBBB" || s6=="BBBBBBBB" || s7=="BBBBBBBB" || s8=="BBBBBBBB" )
         {
             count=2;
             break;
         }
     }
     if(count==1)
        cout<<"R"<<endl;
     else if(count==2)
          cout<<"B"<<endl;

}
void test()
{
    int t;
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

     test();
    //solve();
}
/*
*/
