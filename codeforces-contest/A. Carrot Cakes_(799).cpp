#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    long long s=0,p=0,q=0;
   // s=ceil(t*n)/k;
    //add the number at numerator which is at the denominator..then add 1 with it..it will work as ceil function..ceil is used for only float/double type variable..in case of integer type you may face problem with this type of function...

    s= t*((n+k-1)/k);
   
    p=t+d;
    if(s==p || s<p)
      cout << "NO\n";
    else
      cout << "YES\n";
    return 0;
}
