using namespace std;
#include<bits/stdc++.h>
int main() 
{
	long long int t,n,q,l,r,k,prefix_sum,segment_sum,k_sum,sum;
	cin>>t;
	while(t--)
	{
	    cin>>n>>q;
	    vector<long long int>a(n);
	    vector<long long int>p(n);	// array for storing prefix sums
	    for(int i=0;i<n;++i)
	    {
	        cin>>a[i];
	    }
	    p[0]=a[0];
	    for(int i=1;i<n;++i)    // calculating prefix_sum
	    {
	        p[i]=p[i-1]+a[i];
	    }
	    prefix_sum=p[n-1];	// sum of the original array
	    while(q--)
	    {
	        cin>>l>>r>>k;
	        l=l-1;
	        r=r-1;
	        k_sum=(r-l+1)*k;  // sum of the segment where the elements are to be replaced by 'k'
	        if(l==0)
	        {
	           segment_sum=p[r];
	        }
	        else
	        {
	           segment_sum=p[r]-p[l-1];
	        }
	        sum=prefix_sum-segment_sum+k_sum;
	        if(sum%2!=0)
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	}
}