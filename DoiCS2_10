#include <bits/stdc++.h>
using namespace std;

string s;

int doics2_10(int i) {
	if (i == 0) return (s[i] - '0');
	return ((s[i] - '0') * pow(2, i)) + doics2_10(i - 1);
}

int main()
{
	cin >> s;
	reverse(s.begin(), s.end());
	cout << doics2_10(s.length()-1);
	return 0;
}
