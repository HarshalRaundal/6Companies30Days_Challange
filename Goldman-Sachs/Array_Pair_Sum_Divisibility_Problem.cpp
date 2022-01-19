// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool canPair(vector<int> nums, int k) {
        int n = nums.size();
        if (n % 2) return false;

        unordered_map<int , int> remain;

        for (int i = 0; i < n; i++) {
            remain[nums[i] % k]++;
        }

        for (auto val : remain) {
            // cout<<val.first<<" "<<val.second<<"\n";
            if (val.first == 0 || (!k % 2 && val.first == k / 2)) {
                if (val.second % 2) return false;
            } else {
                if (remain.find(k - val.first) == remain.end()) return false;
                else if (val.second != remain[k - val.first]) return false;
            }

        }



        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends