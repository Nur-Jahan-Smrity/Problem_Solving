#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char m[50],n[50];
    int i,j;
    scanf("%s",m);
    scanf("%s",n);     
    i=0;
    j=0;
    while(n[i]!='\0')
    {
       if(m[j]==n[i])
       {
         
         j++;
       }
       i++;
    }
     
    cout<<j+1<<endl;
    return 0;
}
