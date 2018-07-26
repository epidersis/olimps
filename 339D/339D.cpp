#include <bits/stdc++.h>

using namespace std;


class Node
{
    public:
        Node *left, *right, *father = NULL;
        int value = 0;
        bool mode;
        
        void re_calc()
        {
            if (mode)
            {
                value = left->value | right->value;
            }
            else
            {
                value = left->value ^ right->value;
            }
            
            if (father)
            {
                father->re_calc();
            }
        }
};

void node_creator(Node *f, vector<Node*> &l, bool mode, int layout_amount)
{
    if (layout_amount == 0)
    {
        cin >> f->value;
        l.push_back(f);
        return;
    }
    
    f->left = new Node;
    f->right = new Node;
    
    f->left->father = f->right->father = f;
    f->left->mode = f->right->mode = mode;
    
    node_creator(f->left, l, !mode, layout_amount - 1);
    node_creator(f->right, l, !mode, layout_amount - 1);
    
    return;
}

int main()
{
    ios::sync_with_stdio(false);

    bool f_mode;
    int n, m, s, p, b;
    Node *v = new Node;
    vector<Node*> a;
    
    cin >> n >> m;
    s = pow(2, n);
    
    if (n % 2 == 0) f_mode = false;
    else f_mode = true;
    
    v->mode = f_mode;
    node_creator(v, a, !f_mode, n);

    for (int i = 0; i < s; i += 2)
    {
        a[i]->father->re_calc();
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> p >> b;
        a[p-1]->value = b;
        a[p-1]->father->re_calc();
        
        cout << v->value << endl;
    }

    return 0;
}

