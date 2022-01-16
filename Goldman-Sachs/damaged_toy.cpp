// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int findPosition(int n , int m , int k) {
        return ( m % n + k - 1) % n == 0 ? n : ( m % n + k - 1) % n;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;

        cin >> N >> M >> K;

        Solution ob;
        cout << ob.findPosition(N, M, K) << endl;
    }
    return 0;
}  // } Driver Code Ends