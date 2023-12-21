
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
long long getReverse(long long int n){

    long long reverseValue = 0;
    while(n > 0){
        reverseValue = reverseValue * 10 + n % 10;
        n /= 10;
    }
    return  reverseValue;
}

bool isPalindrome(long long int n){
    long long reverseValue = 0, p = n;
    while(n > 0){
        reverseValue = reverseValue * 10 + n % 10;
        n /= 10;
    }

    return  reverseValue == p;
}
void solve()
{

     ll i,j,n;
    cin>>n;
    ll a[n+5]={0};
    /*
    for(int i=0; i<s.length();i++)
    {
       char b=s[i];
    }*/

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
