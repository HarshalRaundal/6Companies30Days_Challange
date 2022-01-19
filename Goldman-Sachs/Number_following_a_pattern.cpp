// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    string printMinNumberForPattern(string S) {
        stack<int> s1;
        string res;

        int count = 1;

        for (int i = 0; i < S.length(); i++)
        {
            char ch = S[i];

            if (ch == 'D')
            {
                s1.push(count);
                count++;
            }
            else
            {
                s1.push(count);
                while (!s1.empty())
                {
                    res += to_string(s1.top());
                    s1.pop();
                }
                count++;
            }
        }
        s1.push(count);

        while (!s1.empty())
        {
            res += to_string(s1.top());
            s1.pop();
        }
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0;
}
// } Driver Code Ends