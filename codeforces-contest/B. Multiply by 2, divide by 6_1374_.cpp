//B. Multiply by 2, divide by 6_1374_.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int two=0,three=0,others=0;
//str.find('s')
//set<int,int>st;
void primeFactors(int n)
{

    for (int i = 2; i <= 3; i ++)
    {
        while (n % i == 0)
        {
            if(i==2)
            {
               //cout << i << " ";
               two++;
            }
            else
            {
                //cout << i << " ";
                 three++;
            }
            n = n/i;

        }
    }
    if (n > 2)
    {
        others++;
        //cout<<n<<" ";
    }

}
void solve()
{

    ll i,j,n;
    cin>>n;
    if(n==1)
    {
        cout<<"0"<<endl;
        return;
    }
    primeFactors(n);
    // 6 = 2*3 ........1 move karon 6 diye divide jay ..
    // 72 = 2*2*2*3*3 ....2 beshi bar r 3 kom ber thakle -1 print hobe .. karon divide shudu 6 diye korte perbo 2 diye perbo na..2 diye shudu multiply kora jabe.....
    // 324 = 2*2*3*3*3*3 .... 6 move karon 2 ber 6 diye jay , er por 2 ta 3 extra thakae ..jehetu 2 diye multiply kora jabe question e bola ase tai 3 2 ta k 2 ta 2 diye multiply korbo jeta korte extra 2 ber operation kora lagbe .. tai 2 + r 26 diye divide jabe 2 ber = 4 move ..in total 4+2 =6 .........
    //30 = 2*3*5 ...onno digit thakle oitar khetre -1;
    if(others || two>three)
    {
        cout<<"-1"<<endl;
    }
    else if(three>=two)
    {
        cout<<two+(three-two)*2<<endl;
    }
    two=0;three=0;others=0;
}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        solve();
        //cin.ignore();

    }

}

int main()
{

    test();
    //solve();
}
/*

*/

