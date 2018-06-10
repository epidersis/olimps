#include <bits/stdc++.h>

using namespace std;


int main()
{
	int result = 0, temp;
	string s;
	
	cin >> s;
	s.insert(0, "a");
	
	for (int i = 0; i < s.length()-1; i++)
	{
		temp = abs(s[i+1] - s[i]);
		result += min(temp, 26 - temp);
	}
	
	cout << result;

    return 0;
}

