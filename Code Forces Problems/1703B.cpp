#include <bits/stdc++.h>
using namespace std;
int main() 
{
	long long t,n,baloons;
	cin>>t;
	map<char, int> mp;
	while(t--)
	{
	    baloons=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(char ch = 'A'; ch <= 'Z'; ch++) 
        {
            mp[ch] = 0;
        }
	    for(long long i=0;i<n;++i)
	    {
	        if(mp[s[i]]==0)	// problem solved for the first time
	        {
	            baloons+=2;
	            mp[s[i]]=1;	// marking it solved
	        }
	        else	// problem solved but not the first time
	        {
	            ++baloons;
	        }
	    }
	    cout<<baloons<<endl;
	}
}
