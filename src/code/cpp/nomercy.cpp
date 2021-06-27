#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, stu, ans = 0, mx = INT_MIN;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int local_mx = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> stu;
                if (stu == 1) local_mx++;
            }
            if (local_mx > mx)
            {
                mx = local_mx;
                ans = i;
            }
        }
        if(ans) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}