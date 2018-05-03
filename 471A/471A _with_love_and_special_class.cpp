#include <bits/stdc++.h>

using namespace std;


template <class T>
class MyList: public list<T>
{
    public:
        T operator[](int a)
        {
            auto it = this->begin();
            advance(it, a);
            
            return *it;
        }
};


int main()
{
    short l;
    MyList<short> ls;
    
    for (short i = 0; i < 6; i++)
    {
        cin >> l;
        ls.push_back(l);
    }
    
    ls.sort();
    
    if (count(ls.begin(), ls.end(), ls[3]) < 4)
    {
        cout << "Alien";
    }
    else
    {
        ls.remove(ls[3]);
        
        if (ls.size() == 0) cout << "Elephant";
        else if (ls.size() == 1) cout << "Bear";
        else if (ls[0] == ls[1]) cout << "Elephant";
        else cout << "Bear";
    }
    
    return 0;
}
