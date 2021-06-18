#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k;
    
    while(t--)
    {
        cin >> n >> k;
        vector<int> vec;
        int ans = 0;

        for(int i = 1; i <= n; i++) vec.push_back(i);

        for(int a = 0; a < n; a++){
        for(int b = a + 1; b < n; b++){
            int ab = vec[a] & vec[b];
            if(ab > ans && ab < k) ans = ab;
            }
        }

        cout << ans << endl;
    }

    return 0;
}