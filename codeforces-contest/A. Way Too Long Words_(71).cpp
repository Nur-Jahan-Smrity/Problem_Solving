#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
     long long n;
     cin>>n;
     while(n--) 
     {
         long long p=0;
         string s;
         cin>>s;
         p=s.size();
         if(p>10)
           cout<<s[0]<<p-2<<s[p-1]<<endl;
         else
           cout<<s<<endl;
     
     }
      return 0;
}
//another way
/*
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
      // getline(cin,s);
      //( if we use getline here then after taking input n when we press enter it with consider it as another line...that is if we take input 2 then we will be able to take input only 1 line..)
       cin>>s;
       int l=0;
       l=s.size();
       if(l>10)
       {
          cout<<s[0]<<l-2<<s[l-1]<<endl;
       }
       else
         cout<<s<<endl;
    
    }
    return 0;
}
*/
