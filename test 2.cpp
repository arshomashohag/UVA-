#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

struct paren{
    int pos;
    int dep;
};

bool comp1 (paren x, paren y)       // descending sort according to pos
{
    return (x.pos > y.pos);
}

bool comp2 (paren x, paren y)
{
    return (x.dep < y.dep);
}

struct bit{
    vector <int> a;
    int size;
    void add(int x, int i);
    int read(int i);
    bit(int n)
    {
        a.resize(n+1, 0);
        size = n;
    }
};

int bit::read(int i)
{
    int sum = 0;
    while (i > 0)
    {
        sum += a[i];
        i -= (i & -i);
    }
    return sum;
}

void bit::add(int x, int i)
{
    while (i <= size)
    {
        a[i] += x;
        i += (i & -i);
    }
}

int main()
{
    int t;
    cin >> t;
    for (int tcas = 0; tcas < t; tcas++)
    {
        int n;
        long long ans = 0;
        cin >> n;
        string s;
        vector <paren> open;
        cin >> s;
        stack <int> st;
        int dep = 0;
        vector <int> deptab(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '4')
            {
                st.push(i+1);
                dep++;
            }
            else if (!st.empty())
            {
                paren temp;
                temp.pos = st.top();
                temp.dep = deptab[dep];
                open.push_back(temp);
                st.pop();
                deptab[dep-1] = max(deptab[dep] + 1, deptab[dep-1]);
                deptab[dep] = 0;
                dep--;
            }
        }
        sort(open.begin(), open.end(), comp1);
        stable_sort(open.begin(), open.end(), comp2);
        bit tr(n);
        for (vector<paren>::iterator it = open.begin(); it != open.end(); it++)
        {
            ans += (*it).pos - tr.read((*it).pos);
            tr.add(2, (*it).pos);
        }
        cout << ans << endl;
    }
    return 0;
}
