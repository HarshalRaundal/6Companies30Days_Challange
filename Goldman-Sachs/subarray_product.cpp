// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution {
public:

    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int l = 0 , r = 0;
        long long product = 1;
        int res = 0;

        if (a[l] < k) res++;
        product = a[l];
        while (l < a.size() && r < ( a.size() - 1)) {
            if (l > r) {

                l = r + 1;
                r++;
                product = a[l];
                if (l < a.size() && a[l] < k) res++;
            }

            if (r < a.size() - 1 && product * a[r + 1] < k ) {
                if (l < r + 1) res++;
                product *= a[r + 1];
                res +=  r + 1 - l;
                r++;
            } else {

                product /= a[l];
                l++;

            }

        }

        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends