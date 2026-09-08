using namespace std;
#include<bits/stdc++.h>
int main() 
{
    long long t,count_easy,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long>a(n);
        count_easy=0;
        for(long long i=0;i<n;++i)
        {
            cin>>a[i];
            // keeping a count of easy problems if it's less than or equal to 1, then it's impossible i-e '-1'
            if(a[i]==0)
            {
                ++count_easy;
            }
        }
        if(count_easy<=1)
        {
            cout<<-1<<endl;
        }
        // solution set = {-1,0,1,2}
        else
        {
            // if first and last are already easy
            if(a[0]==0 && a[n-1]==0)
            {
                cout<<0<<endl;
            }
            // if either first or last is easy, then  we need one swap only
            else if(a[0]==0 || a[n-1]==0)
            {
                cout<<1<<endl;
            }
            // if both first and last are hard then we need two swaps
            else if(a[0]==1 && a[n-1]==1)
            {
                cout<<2<<endl;
            }
        }
    }
}