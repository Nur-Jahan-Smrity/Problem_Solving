// queue data structure (FIFO)..
#include<bits/stdc++.h>
/*
///string to integer ...
int s=0;
string s1;
cin>>s1;
stringstream value(s1);
        value>>s;

///last element of string ...
s1.back()-'0';

///delete last element of string ..
 s1.pop_back();
 ///str.erase( str.end()-1 );  // it is also used to erase last character..

 ///string.rbegin() .. it is used to reverse the string ..
*/
using namespace std;
typedef long long ll;
//int j=0;
ll adj_matrix[1000][1000];
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
void fillPrefixSum(ll arr[], ll n, ll prefixSum[])
{
	prefixSum[0] = arr[0];
	// Adding present element with previous element
	for (int i = 1; i < n; i++)
		prefixSum[i] = prefixSum[i - 1] + arr[i];
}
void solve()
{
    //cout<<"ki shomossha tomar ?????"<<endl;
    cout<<"......In queue you cannot remove element from back side ......"<<endl;
    cout<<endl;
    ll n ,i,j,a,b,c;
    cout<<"Enter number of elements :"<<endl;
    cin>>n;
    queue<ll>q;
   cout<<"enter "<<n<<" elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        q.push(a);
    }
    cout<<"The required queue is :"<<endl;
    while(q.size()>0)
    {
        cout<<q.front()<<endl;
        //pop is used to remove front element
        q.pop();
    }
     queue<ll>q1;
     cout<<endl;
   cout<<"Again enter "<<n<<" elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>b;
        q1.push(b);
    }
    cout<<"The required queue after doing different operation :"<<endl;
    cout<<endl;
    while(q1.size()>0)
    {
        cout<<"size of the queue is : ";
        cout<<q1.size()<<endl;
        cout<<"front element is : ";
        cout<<q1.front()<<endl;
        cout<<"the back element is : ";
        cout<<q1.back()<<endl;
        //pop is used to remove front element
        //here 2 elements will be removed each time..one element which is already printed will be removed and another element beside it which is not printed will also be removed ..

        q1.pop();
        q1.pop();
        cout<<"after doing pop operation twice the element the front element is : ";
        cout<<q1.front()<<endl;
        cout<<"size of the queue after doing pop operation  : ";
        cout<<q1.size()<<endl;
    }
    queue<ll>q2;
    cout<<endl;
   cout<<"Again enter "<<n<<" elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>c;
        q2.push(c);
    }
    cout<<"The required queue after doing operation is : "<<endl;
    cout<<endl;
    while(q2.size()>0)
    {
        cout<<"size of the queue is : ";
        cout<<q2.size()<<endl;
        cout<<"front element is : ";
        cout<<q2.front()<<endl;
        cout<<"the back element is : ";
        cout<<q2.back()<<endl;
        //cout<<q2.front()<<endl;
        //pop is used to remove front element
        q2.pop();
        cout<<"after removing the element the front element is : ";
        cout<<q2.front()<<endl;
        cout<<"size of the queue after doing pop operation  : ";
        cout<<q2.size()<<endl;
       // q2.pop();
       // cout<<"again after removing the element the front element is : ";
        //cout<<q2.front()<<endl;
        cout<<"check the queue is empty or not( true means = empty) & (false means = not empty)  : ";

           cout<<q2.empty()<<endl;
    }



    /*
    //prefix sum/cumulative sum
    long long n,i;
    cin>>n;
    ll arr[n+10]={0};
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll prefixSum[n];
    fillPrefixSum(arr, n, prefixSum);
    for (int i = 0; i < n; i++)
		cout << prefixSum[i] << " ";
    */

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //j++;
       // cout<<"kiree amke(test function) toh thik e execute kortese !!!"<<endl;
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   //int n = sizeof(arr) / sizeof(arr[0]);
     //test();
   solve();
}
/*
Methods	Description
push()	inserts an element at the back of the queue
pop()	removes an element from the front of the queue
front()	returns the first element of the queue
back()	returns the last element of the queue
size()	returns the number of elements in the queue
empty()	returns true if the queue is empty




output :

......In queue you cannot remove element from back side ......

Enter number of elements :
6
enter 6 elements :
1 2 3 4 5 6
The required queue is :
1
2
3
4
5
6

Again enter 6 elements :
1 2 3 4 5 6
The required queue after doing different operation :

size of the queue is : 6
front element is : 1
the back element is : 6
after doing pop operation twice the element the front element is : 3
size of the queue after doing pop operation  : 4
size of the queue is : 4
front element is : 3
the back element is : 6
after doing pop operation twice the element the front element is : 5
size of the queue after doing pop operation  : 2
size of the queue is : 2
front element is : 5
the back element is : 6
after doing pop operation twice the element the front element is : 0
size of the queue after doing pop operation  : 0

Again enter 6 elements :
1 2 3 4 5 6
The required queue after doing operation is :

size of the queue is : 6
front element is : 1
the back element is : 6
after removing the element the front element is : 2
size of the queue after doing pop operation  : 5
check the queue is empty or not( true means = empty) & (false means = not empty)  : 0
size of the queue is : 5
front element is : 2
the back element is : 6
after removing the element the front element is : 3
size of the queue after doing pop operation  : 4
check the queue is empty or not( true means = empty) & (false means = not empty)  : 0
size of the queue is : 4
front element is : 3
the back element is : 6
after removing the element the front element is : 4
size of the queue after doing pop operation  : 3
check the queue is empty or not( true means = empty) & (false means = not empty)  : 0
size of the queue is : 3
front element is : 4
the back element is : 6
after removing the element the front element is : 5
size of the queue after doing pop operation  : 2
check the queue is empty or not( true means = empty) & (false means = not empty)  : 0
size of the queue is : 2
front element is : 5
the back element is : 6
after removing the element the front element is : 6
size of the queue after doing pop operation  : 1
check the queue is empty or not( true means = empty) & (false means = not empty)  : 0
size of the queue is : 1
front element is : 6
the back element is : 6
after removing the element the front element is : 0
size of the queue after doing pop operation  : 0
check the queue is empty or not( true means = empty) & (false means = not empty)  : 1

*/
