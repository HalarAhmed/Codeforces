#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    bool yes=true;
    cin>>n;

    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    // initializing every letter as 0:
    map<char,int>mp;
    for(char ch='a';ch<='z';++ch)
    {
        mp[ch]=0;
    }

    // letters that are found in the string are increased from 0:
    for(char c:s)
    {
        ++mp[c];
    }

    // if any letter any in string did not occur the answer is "NO":
    for(char c='a';c<='z';++c)
    {
        if(mp[c]==0)
        {
            yes=false;break;
        }
    }
    if(yes)
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