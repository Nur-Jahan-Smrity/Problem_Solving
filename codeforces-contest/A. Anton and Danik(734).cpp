#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    long long i,a=0,d=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
       if(s[i]=='A')
          a++;
       else
          d++;
    }
    if(a>d)
       cout<<"Anton"<<endl;
    else if(a<d)
       cout<<"Danik"<<endl;
    else
       cout<<"Friendship"<<endl;
    return 0;
}
