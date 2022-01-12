// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int main() {

	int T;
	cin >> T;
	while (T--)
	{
		string str;
		cin >> str;

		cout << encode(str) << endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{
	int ct = 1;
	string res = "";
	for (int i = 0; i < src.length() - 1; i++) {
		if (src[i + 1] == src[i])
			ct++;
		else {
			res += src[i] + to_string(ct);
			ct = 1;
		}
	}
	res += src[src.length() - 1] + to_string(ct);
	return res;
}

