#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);
    try {
    int I = stoi(S);
    cout << I << endl;
    } catch(...) {
    cout << "Bad String" << endl;
    }
    return 0;
}
