#include <bits/stdc++.h>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int min_sum = INT_MAX;
    int n  = nums.size();
    vector<int> sums(n + 1);
    sums[0] = 0;
    // sums[1] = nums[0];

    for (int i = 1; i <= n; i++)
        sums[i] = sums[i - 1] + nums[i - 1];

    for (int i = 1; i <= n; i++) {
        // for(int j=0;j<n;j++){
        //      if(sums[j]-sums[i]+nums[j] >= target) min_sum = min(min_sum , j-i+1);
        // }

        int j = lower_bound(sums.begin() , sums.end() , target + sums[i - 1]) - sums.begin();

        if (j <= n) {
            min_sum = min(min_sum , j - i + 1);
        }

    }


    return min_sum == INT_MAX ? 0 : min_sum;

}
int main()
{
    cout << "array size : ";
    int n;
    cin >> n;

    cout << "array :";
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int target;
    cout << "Target : ";
    cin >> target;

    int res = minSubArrayLen(target, nums);

    cout << res << endl;

    return 0;
}