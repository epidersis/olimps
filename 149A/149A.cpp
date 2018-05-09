#include <bits/stdc++.h>

using namespace std;


int main()
{
	short k;
	cin >> k;
	
	if (k == 0)
	{
		cout << 0;
		return 0;
	}
	
	short arr[12];
	
	for (short i = 0; i < 12; i++) cin >> arr[i];
	
	sort(arr, arr+12);
	
	for (short i = i; i < 12; i++)
	{
		k -= arr[11 - i];
		
		if (k <= 0){
			cout << i+1;
			return 0;
		}
	}
	
	cout << -1;
    return 0;
}

