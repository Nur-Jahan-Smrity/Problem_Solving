#include<iostream>
using namespace std;

int main()
{
    int k,r,p=0,q=1,s=0;
    cin>>k>>r;
    s=k;
    while(1)
    {
       p=k%10;
       //cout<<p;
       if(p==r || p==0)
       {
          
          break;
       }
       else
       {
          q++;
          k=k+s;
          
       }
    }
    cout <<q<<endl;
    return 0;
}
