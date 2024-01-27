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
        string s;
        getline(cin,s);
        string cheak;
        int count = 0;

        stringstream ss(s);

        while(ss >> cheak) {
            count++;
        }

        cout<<"Count = "<<count<<endl;
    }

    return 0;
}