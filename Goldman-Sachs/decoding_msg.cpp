// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:


	int CountWays(string str) {
		int n = str.length();
		if (str[0] == '0') return 0;
		int mod = 1000000007;
		vector<int> ways(n + 1, 0);
		ways[1] = 1;
		ways[0] = 1;
		for (int i = 2 ; i <= n; i++) {

			if (str[i - 1] == '0' && str[i - 2] > '2') return 0;
			if ((str[i - 2] < '2' && str[i - 2] > '0') || (str[i - 2] == '2' && str[i - 1] < '7'))
				ways[i] = ( (long long )ways[i] + ways[i - 2]) % mod ;
			if (str[i - 1] != '0')
				ways[i] = ((long long )ways[i] + ways[i - 1]) % mod;
		}
		return ways[n];
	}

};

// { Driver Code Starts.
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends