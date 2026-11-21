#include <bits/stdc++.h> // 1000 rated question 
using namespace std;

void solve()
{
    long long n,ans=0;
    cin>>n;
    string s;
    cin>>s;

    map<char,int>count;
    for(char c:s)
    {
        count[c]=0;
    }

    for(char c:s)
    {
        count[c]++; // counting frequency of each character in a string:
    }

    for(auto it=count.begin();it!=count.end();++it)
    {
        if((it->second)>1)
        {
            ans+=((it->second)-1);  // counting number of distinct letters required:
        }
    }
    /* if number of distinct letters exceed 26 than it's impossible,
        if the length of string exceeds 26 than it's impossible too!*/
    if(ans>=26 || s.length()>26)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
