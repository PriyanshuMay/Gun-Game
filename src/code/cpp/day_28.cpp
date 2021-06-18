#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    string email,name;
    vector<string> list;

    while(N--) {
    cin >> name >> email;
    if(regex_match(email, regex("(.*)@gmail.com")))
    list.push_back(name);
    }

    sort(list.begin(), list.end());   
    for(auto& user : list) cout << user << endl;
    return 0;
}
