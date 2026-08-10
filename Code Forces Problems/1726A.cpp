using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long t,n,max_diff;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            vector<long long>a(n);
            for(long long i=0;i<n;++i)
            {
                cin>>a[i];
            }
            cout<<0<<endl;
        }
        else
        {
            vector<long long>a(n);
            for(long long i=0;i<n;++i)
            {
                cin>>a[i];
            }
            max_diff=INT_MIN;
            // fixing a[0]:
            for(long long i=1;i<n;++i)
            {
                max_diff=max(max_diff,a[i]-a[0]);
            }
            // fixing a[n-1]:
            for(long long i=0;i<n-1;++i)
            {
                max_diff=max(max_diff,a[n-1]-a[i]);
            }
            // taking difference of adjacent elements:
            for(long long i=0;i<n-1;++i)
            {
                max_diff=max(max_diff,a[i]-a[i+1]);
            }
            cout<<max_diff<<endl;
        }
    }
}