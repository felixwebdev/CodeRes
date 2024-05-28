#include <bits/stdc++.h>
using namespace std;

int CtoI(char ch) {
	if (ch - '0' < 10) return ch - '0';
	else {
		return ch - '7';
	}
}

string s;

int Doicoso16_10(int n) {
	if (n == s.length()-1) return CtoI(s[n]) * pow(16,s.length()-1-n);
	return CtoI(s[n])* pow(16,s.length()-1-n) + Doicoso16_10(n + 1);
}

int main()
{
	ifstream in("coso.inp");
	ofstream out("coso.out");


	in >> s;
	out << Doicoso16_10(0);

	in.close();
	out.close();
	return 0;
}
