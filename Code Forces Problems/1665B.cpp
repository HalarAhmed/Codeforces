using namespace std;
#include<bits/stdc++.h>
int main() 
{
	long long t,n,max_freq,ops;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<long long>a(n);
	    for(long long i=0;i<n;++i)
	    {
	        cin>>a[i];
	    }
	    max_freq=0;
	    ops=0;
	    map<long long,long long>freq_map;
	    for(long long i:a)   // counting the frequency of each element
	    {
	        freq_map[i]++;
	    }
	    for(auto i:freq_map)    // finding the maximum frequency
	    {
	        max_freq=max(max_freq,i.second);
	    }
	    while(max_freq<n)
	    {
	        ++ops;  // cloning the array
	        if(max_freq*2<=n)
	        {
	            ops+=max_freq;  
	            max_freq*=2;
	        }
	        else
	        {
	            ops+=(n-max_freq);
	            max_freq=n;
	        }
	    }
	    cout<<ops<<endl;
	}
}