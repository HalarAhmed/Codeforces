using namespace std;
#include<bits/stdc++.h>
int main() 
{
	long long t,n,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<long long>a(n);
	    for(long long i=0;i<n;++i)
	    {
	        cin>>a[i];
	    }
	    count=0;
        // iterating backwards 
	    for(long long i=n-1;i>0;--i)
	    {
            // if any 2 elements become zero at any point it's impossible to make the array strictly increasing
	        if(a[i]==a[i-1] && a[i]==0)
	        {
	            count=-1;
	            break;
	        }
            // comparing consecutive elements:
	        else if(a[i]<=a[i-1])
	        {
	            while(a[i]<=a[i-1] && a[i-1]!=0)
	            {
                    // performing the allowed operation if a[i-1]>a[i]
	                a[i-1]=a[i-1]/2;
	                ++count;
	            }
                // if any 2 elements become zero at any point it's impossible to make the array strictly increasing
	            if(a[i-1]==a[i] && a[i]==0)
	            {
	                count=-1;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
}