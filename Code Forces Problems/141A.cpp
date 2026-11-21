#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    string guest,host,comb;
    bool yes=false;
    cin>>guest>>host>>comb;

    map<char,int>count;
    map<char,int>comb_count;

    for(char c='A';c<='Z';++c)
    {
        count[c]=0;
    }

    for(char c='A';c<='Z';++c)
    {
        comb_count[c]=0;
    }

    // storing the count of chars in guest string:
    for(char c:guest)
    {
        count[c]++;
    }
    // storing the count of chars in host string:
    for(char c:host)
    {
        count[c]++;
    }
    // storing the count of chars in comb string:
    for(char c:comb)
    {
        comb_count[c]++;
    }

    // checking the count of each char in both maps:
    for(char c='A';c<='Z';++c)
    {
        // if count differs that means a letter must be missing in the pile:
        if(comb_count[c]!=count[c])
        {
            yes=true;
            break;
        }
    }

    if(yes)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
