#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool alt=true;  // variable to check if the clouds alternate or not
    
    if(n%2!=0)  // if no. of clouds are odd then "NO"
    {
        cout<<"NO"<<endl;
    }
    else
    {
        // if the dark and white clouds alternate in the entire sky then "NO", otherwise "YES":
        for(int i=0;i<n-1;++i)
        {
            if(s[i]=='0' && s[i+1]=='0')
            {
                alt=false;
                break;
            }
            else if(s[i]=='1' && s[i+1]=='1')
            {
                alt=false;
                break;
            }
        }

        if(alt)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
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
