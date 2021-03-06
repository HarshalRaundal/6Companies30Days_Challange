// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int lengthOfLongestAP(int A[], int n) {
        int max_val = 0 ;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            max_val = max(max_val , A[i]);
        }

        vector<vector<int>> dp(2 * max_val + 1 , vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int diff = A[i] - A[j] + max_val;
                dp[diff][i] = dp[diff][j] + 1;
                ans = max(ans , dp[diff][i]);
            }
        }
        return ans + 1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends