#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    for(int i = 1000; i >= 1; i--) {
        
        if(i % 5 == 0) cout<<"\n";
        
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}