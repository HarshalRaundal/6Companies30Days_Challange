// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    string decodedString(string s) {
        int l = 0 , r = s.length() - 1;
        string res = "";
        int num = 0;
        string rep = "";


        while (l <= r) {


            if (s[l] >= '0' && s[l] <= '9') {

                while (s[l] >= '0' && s[l] <= '9') {
                    num  = num * 10 + (s[l] - '0');
                    l++;
                }
                l += 1;
                // cout<<"num: "<<num<<"\n";
                int j = l;
                stack<char> balance;
                balance.push('[');
                while (!balance.empty()) {
                    if (s[j] == ']') balance.pop();
                    else if (s[j] == '[') balance.push('[');
                    j++;
                }
                // cout<<"decode "<<s.substr(l , j-l-1)<<"\n";
                rep = decodedString(s.substr(l , j - l - 1));
                while (num--) {
                    res += rep;
                }
                num = 0;
                l = j;

            } else {
                res += s[l];
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
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends