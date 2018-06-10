#include <bits/stdc++.h>

using namespace std;


int main()
{
    short n;
    cin >> n;
    
    auto *a = new pair<short, short>[n];
    
    for (short i = 0; i < n; i++)
    {
        a[i].first = i+1;
        cin >> a[i].second;
    }
    
    sort(a, a+n, [](pair<short, short> f,  pair<short, short> b) {
    	return f.second < b.second;
	});
    
    for (short i = 0; i < (n/2); i++)
    {
        cout << a[i].first << " " << a[n-i-1].first << endl;
    }
    

    return 0;
}
