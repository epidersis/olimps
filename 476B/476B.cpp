#include <bits/stdc++.h>

using namespace std;

int fact(int a)
{
    int f = 1;
    
    for (int i = 1; i <= a; i++)
    {
        f *= i;
    }
    
    return f;
}


int main()
{
    ios::sync_with_stdio(false);

    int f_pos, c_pos, dst, p_moves;
    float answer;
    
    f_pos = c_pos = p_moves = 0;
    
    string s1, s2;
    
    cin >> s1 >> s2;
    
    for (auto ch: s1) f_pos += (ch == '+' ? 1:-1);
    
    for (auto ch: s2)
    {
        if (ch == '+') c_pos += 1;
        else if (ch == '-') c_pos += -1;
        else p_moves++;
    }

    dst = abs(f_pos - c_pos);
    
    if ((p_moves + dst) % 2 != 0 || dst > p_moves)
    {
        answer = 0;
    }
    else
    {
        answer = fact(p_moves) / 
             (fact((p_moves+dst) / 2) * fact(p_moves - (p_moves+dst) / 2)) / pow(2, p_moves);
    }
    
    printf("%.12f", answer);

    return 0;
}

