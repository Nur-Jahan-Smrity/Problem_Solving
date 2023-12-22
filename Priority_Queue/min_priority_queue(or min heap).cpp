#include <bits/stdc++.h> 
using namespace std; 

typedef pair<int, int> pi; 

int main() 
{ 
	priority_queue<pi, vector<pi>, greater<pi> > pq; 

	pq.push(make_pair(10, 200)); 
	pq.push(make_pair(20, 100)); 
	pq.push(make_pair(15, 400)); 

	pair<int, int> ans = pq.top(); 
	cout << ans.first << " " << ans.second; 
	return 0; 
}
