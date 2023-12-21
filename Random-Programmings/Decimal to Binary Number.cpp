// Decimal to Binary Number.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int number ;
	cin>>number;
	int n = (int)(log2(number));
	cout << "the binary number is : "<< bitset<64>(number).to_string().substr(64 - n- 1);
}
