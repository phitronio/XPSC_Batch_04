#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        stack<int> value;
        stack<int> index;
        long long total_cost = 0;

        for (int i = 0; i < n; i++)
        {
            while (value.size() > 1 && value.top() > a[i])
            {
                int cur = value.top();
                value.pop();
                if (cur >= value.top())
                {
                    index.pop();
                }
                else
                {
                    value.push(cur);
                    break;
                }
            }
            value.push(a[i]);
            index.push(i);
        }

        int last_item = value.top();
        value.pop();
        int last_index = index.top();
        index.pop();

        while (!index.empty())
        {
            total_cost += max(last_item, value.top()) * (last_index - index.top());
            last_item = value.top();
            value.pop();
            last_index = index.top();
            index.pop();
        }

        cout << total_cost << "\n";
    }

    return 0;
}