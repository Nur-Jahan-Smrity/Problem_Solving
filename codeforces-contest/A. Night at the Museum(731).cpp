#include<iostream>
#include<cstring>
#include<cctype>
#include<cmath>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p=0,q=0,j=0,r=0,sum=0;
    string s;
    cin>>s;
    p=s.size();
    for(i=0;i<p;i++)
    {
       for(;;j++)
       {
         
        if(j>25)
            j=0;
        if(s[i]==('a'+j))
        {
        
            break;
        }
        //r is to count number of moves
        r++;
        //cout<<char(97+j)<<" ";
             
       }    
       q=abs(26-r);
       if(q==0) 
         q=1;
       //cout<<r<<" "<<q<<endl;
       if(r<q)
         sum+=r;
       if(r>q)
         sum+=q;
       if(r==q)
         sum+=q;
       r=0;
        q=0;
    }
    cout<<sum<<endl;
    return 0;
}
