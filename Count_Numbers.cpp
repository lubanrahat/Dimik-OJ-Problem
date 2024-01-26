#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    cin.ignore();

    while(tt--) {
        int nums,count = 0;
        string s;
        getline(cin,s);

        stringstream ss(s);

        while(ss >> nums) {
            count++;
        }

        cout<<count<<endl;
    }

    return 0;
}