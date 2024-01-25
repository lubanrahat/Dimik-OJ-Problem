#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while(tt--) {
        int n;
        cin >> n;

        int i = 1;

        while(i <= n) {
            int j = 1;
            while(j <= n) {
                cout<<"*";
                j++;
            }
            cout<<"\n";
            i++;
        }
        if(tt != 0)
          cout<<"\n";
    }

    return 0;
}