//A. Keyboard_474_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
//str.find('s')

void solve()
{

    ll i,j;
    char ch;
    string s, s1="qwertyuiopasdfghjkl;zxcvbnm,./", temp_s="";
    int all_size = s1.size();

    cin>>ch;
    // cin.ignore();
    cin>>s;
    int s_size=s.size();
    int max_size=max(s_size,all_size);
    //  qwertyuiop
    //  asdfghjkl;
    //  zxcvbnm,./

    /*
    L
    zxcvbnm,kjhgfdsaqwertyuio
    */

    //xcvbnm,.lkjhgfdswertyuiop

    if(ch=='R')
    {
        for( i=0; i<max_size; i++)
        {
            if( s_size==0)
            {
                break;
            }
            int pos=s1.find(s[i]);
            // cout<<pos<<endl;
            if(pos!=0 && pos!=10 && pos!=20)
            {
                temp_s+=s1[pos-1];
                //cout<<temp_s<<endl;
                s_size--;
            }
            else
            {
                temp_s+=s1[pos];
                //cout<<temp_s<<endl;
                s_size--;
            }
        }
    }
    //  qwertyuiop
    //  asdfghjkl;
    //  zxcvbnm,./
    else
    {
        for( i=0; i<max_size; i++)
        {
            if( s_size==0)
            {
                break;
            }
            int pos=s1.find(s[i]);
             //cout<<pos<<endl;
            if(pos!=9 && pos!=19 && pos!=29)
            {
                temp_s+=s1[pos+1];
                //cout<<temp_s<<endl;
                s_size--;
            }
            else
            {
                temp_s+=s[pos];
                // cout<<temp_s<<endl;
                s_size--;
            }
        }
    }
    cout<<temp_s<<endl;


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
    //test();
    solve();
}
/*

L
zxcvbnm,kjhgfdsaqwertyuio

Participant's output
qwertyuiohasdfghjkltzxcvb

Jury's answer
xcvbnm,.lkjhgfdswertyuiop
*/
