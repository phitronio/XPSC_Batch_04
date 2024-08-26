#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<vector<int>> indx(4);
        for (int i = 1; i <= 3; i++)
        {
            indx[i].push_back(0);
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            indx[a[i]].push_back(i);
        }
        for (int i = 1; i <= 3; i++)
        {
            indx[i].push_back(n + 1);
        }
        int ans = n * (n + 1) / 2;
        for (int i = 1; i <= 3; i++)
        {
            int low = indx[i][1];
            int high = indx[i][indx[i].size() - 2];
            set<int> st;
            for (int j = low; j <= high; j++)
            {
                st.insert(a[j]);
            }
            int miss = (i + 1) % 3 + 1;
            if (st.find(miss) != st.end())
                continue;
            int high1 = *(lower_bound(indx[miss].begin(), indx[miss].end(), high));
            int low1 = *(--lower_bound(indx[miss].begin(), indx[miss].end(), low));

            int miss_place = (low - low1) * (high1 - high);

            ans -= miss_place;
        }
        cout << ans << "\n";
    }
    return 0;
}