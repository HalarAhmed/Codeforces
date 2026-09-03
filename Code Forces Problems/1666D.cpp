using namespace std;
#include<bits/stdc++.h>
int main() 
{
    long long n;
    string s,t;
    cin>>n;
    while(n--)
    {
        cin>>s>>t;
        map<char,int>freq; // map for counting the frequency of each letter in 't' 
        for(char ch:t) // counting the frequency of each letter in 't'
        {
            ++freq[ch];
        }
        // traversing 's' backwards:
        for(int i=s.length()-1;i>=0;--i)
        {
            if(freq[s[i]]!=0)
            {
                --freq[s[i]];
            }
            else    // replacing letters by a dot that does not exist in t
            {
                s[i]='.';
            }
        }
        // removing dots from s:
        string final="";
        for(int i=0;i<s.length();++i)
        {
            if(s[i]!='.')
            {
                final+=s[i];
            }
        }
        // comparing if final matches 't':
        if(final==t)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}