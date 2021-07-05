#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    vector<int> num;
    cin >> str;
    int n = str.size();
    for(int i=0; i<n; i=i+2)
    num.push_back(str[i] - '0');
    n = num.size();
    sort(num.begin(), num.end());
    for(int i=0; i<n-1; i++)
    cout << num[i] <<"+";
    cout << num[n-1];
    return 0;
}