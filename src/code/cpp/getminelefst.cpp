#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int minEle;
void push(int x)
{
    if (s.empty())
    {
        s.push(x);
        minEle = x;
        return;
    }

    if (x > minEle)
        s.push(x);
    else
    {
        s.push(2 * x - minEle);
        minEle = x;
    }
}
void pop()
{
    if (s.empty())
        cout << -1 << '\n';
    else
    {
        int top = s.top();
        if (top < minEle)
            minEle = 2 * minEle - top;
        s.pop();
    }
}
int getMin()
{
    if (!s.empty())
        return minEle;
    else
        return -1;
}
int top()
{
    if (s.empty())
        return -1;
    else
    {
        int t = s.top();
        return (t < minEle) ? minEle : t;
    }
}
int main()
{
    int q, task;
    cin >> q;
    while (q--)
    {
        cin >> task;
        if (task == 1)
        {
            int x;
            cin >> x;
            push(x);
        }
        if (task == 2)
            pop();
        if (task == 3)
            cout << top() << endl;
        if (task == 4)
            cout << getMin() << endl;
    }
    return 0;
}