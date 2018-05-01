#include <iostream>
using namespace std;

int main()
{
	short n, count = 0;
	cin >> n;
	
	char *a = new char[n];
	cin >> a;
	
	for (short i = 0; i < n - 1; i++ )
	{
		if ( a[i] == a[i+1] ) count++;		
	}
	
	cout << count;	
}
