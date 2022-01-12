// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


// } Driver Code Ends
//User function template for C++
class Solution {
public:
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/

	ull getNthUglyNo(int n) {

		set<long long> q1;

		q1.insert(1);
		// n--;
		while (--n) {
			long long num = *q1.begin();
			q1.erase(q1.begin());
			//  cout<<num<<" ";
			//  q1.pop();
			//  q1.pop();
			q1.insert(num * 2);
			q1.insert(num * 3);
			q1.insert(num * 5);

		}

		return *q1.begin();
	}
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Solution ob;
		auto ans = ob.getNthUglyNo(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends