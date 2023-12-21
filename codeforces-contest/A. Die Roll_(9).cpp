#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int a,b,p=0;
    int c=0,d=0;
    cin>>a>>b;
    //dice(6)= 1,2,3,4,5,6
    //a=4 , b=2 to win dot must be greater or equal to 4
    //p= 6-(a-1) = 6-(4-1) = 3
    //3/6 = 1/2
    if(a>b)
    {
        p=6-(a-1);
    }
    else
        p=6-(b-1);
   
    
    if(6%p==0)
    {
        p=6/p;
        cout<<"1/"<<p<<endl;
    }
    else if(6%2==0 && p%2==0)
    {
        c=6/2;
        d=p/2;
        cout<<d<<"/"<<c<<endl;
    }
    else
       cout<<p<<"/"<<6<<endl;

    return 0;
}
