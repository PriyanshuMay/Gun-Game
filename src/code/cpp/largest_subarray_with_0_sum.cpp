// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends

int maxLen(int arr[], int n)
{
    unordered_map<int, int> presum;
    int sum = 0; 
    int ans = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] == 0 && ans == 0)
            ans = 1;
        if (sum == 0)
            ans = i + 1;
        if (presum.find(sum) != presum.end())
            ans = max(ans, i - presum[sum]);
        else 
            presum[sum] = i;
    }
    return ans;
}
