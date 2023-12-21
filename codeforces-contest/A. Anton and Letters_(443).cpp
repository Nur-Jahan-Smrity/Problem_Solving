#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,p=0,len,j,freq[26]= {0};
    string s;
    getline(cin,s);
    len=s.size();
    for(i=0; i<len; i++)
    {
        if(s[i]>='a' && s[i]<='z')
            freq[s[i]-97]++;
    }
    for(i=0; i<26; i++)
    {
        if(freq[i]>0)
        {
            
            p++;
        }
    }
   
    if(p==0)
        cout<<"0"<<endl;
    else 
       cout<<p<<endl;
    return 0;
}
