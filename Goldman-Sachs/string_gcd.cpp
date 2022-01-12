#include<bits/stdc++.h>
using namespace std;

string gcdOfStrings(string str1, string str2) {
	// cout<<"str1" << str1<<" "<<"str2: "<<str2<<"\n";
	if (str1 + str2 != str2 + str1)
		return "";


	if (str1.length() == str2.length()) return str1;
	else if (str1.length() > str2.length())
		return gcdOfStrings(str1.substr(str2.length() , str1.length() - str2.length()) , str2);
	else return gcdOfStrings(str1 , str2.substr(str1.length() , str2.length() - str1.length()));

	return "";

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	string s1, s2;
	cin >> s1 >> s2;

	cout << "GCD of string is : " << gcdOfStrings(s1, s2) << "\n";


	return 0;
}