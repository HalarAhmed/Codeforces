#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    // while(t--)
    // {
        int l,a,b;
        cin>>l>>a>>b;
        map<int,int>s;
        map<int,int>bb;
        // 0-(l-1):
        for(int i=0;i<l;++i)
        {
            s[i]=0;
        }
        // 0-(l-1):
        for(int i=0;i<l;++i)
        {
            bb[i]=0;
        }
        // 
        for(int i=1;i<=l;++i)
        {
            int idx=(i*a)%l;
            if(s[idx]==0)
            {
                ++s[idx];
            }
        }

        for(int i=1;i<=l;++i)
        {
            int idx=(i*b)%l;
            if(bb[idx]==0)
            {
                ++bb[idx];
            }
        }
        int count=0;
        for(int i=0;i<l;++i)
        {
            if(s[i]==1 && bb[i]==1)
            {
                ++count;
            }
        }

        cout<<count<<endl;
    //}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
