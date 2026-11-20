#include <bits/stdc++.h>
using namespace std;

void solve() {
    string p;
    cin>>p;
    bool yes=false;
    for(char c:p)
    {
        if(c=='H' || c=='Q' || c=='9')
        {
            yes=true;
            break;
        }
    }
    if(yes==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
