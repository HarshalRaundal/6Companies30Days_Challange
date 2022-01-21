// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int l = 0 , r = 0;
        vector<int> res;
        long long sum = 0;
        while (l >= 0 && r < n && l <= r) {

            if (sum == s) break;


            if (sum + arr[r] <= s) {
                sum += arr[r]; r++;
            } else if (arr[r] > s ) {
                sum = 0; l = r + 1; r = r + 1;
            }
            else {
                sum -= arr[l]; l++;
            }

        }

        if (sum == s) {
            res.push_back(l + 1);
            res.push_back(r);
        } else res.push_back(-1);

        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;

    }
    return 0;
}  // } Driver Code Ends