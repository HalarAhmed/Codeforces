using namespace std;
#include<bits/stdc++.h>
int main() 
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long int>a(n);
        for(long long int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        for(long long int i=0;i<n;++i)
        {
            if(a[i]==1)
            {
                ++a[i];
            }
        }
        for(long long int i=0;i<n-1;++i)
        {
            if(a[i+1]%a[i]==0)
            {
                ++a[i+1];
            }
        }
        for(long long int i=0;i<n;++i)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}