using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long int t,n,count_of_zeros,left,right;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long int>a(n);
        bool found=false;
        count_of_zeros=0;
        left=0,right=n-1;
        for(long long int i=0;i<n;++i)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                ++count_of_zeros;
            }
        }
        if(count_of_zeros==n)
        {
            cout<<0<<endl;
        }
        else
        {
            while(a[left]==0)
            {
                ++left;
            }
            while(a[right]==0)
            {
                --right;
            }
            for(long long int i=left;i<=right;++i)
            {
                if(a[i]==0)
                {
                    found=true;
                    break;
                }
            }
            if(found)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
    }
}
