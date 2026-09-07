using namespace std;
#include<bits/stdc++.h>
int main() 
{
    long long t,n,twos,fours,ones,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long>a(n);
        // odd numbers are eventually gonna converge to 1
        twos=0,ones=0,fours=0;
        // even numbers converge to 0 and 2
        // numbers divisible by 4 converge to 0 in even steps
        // numbers not divisible by 4 converge to 0 in odd steps
        for(long long i=0;i<n;++i)  
        {
            cin>>a[i];
            if(a[i]%4==0)
            {
                ++fours;    
            }
            else if(a[i]%2==0)
            {
                ++twos;
            }
            else
            {
                ++ones;
            }
        }
        ans=max(fours,twos);
        ans=max(ans,ones);
        cout<<ans<<endl;
    }
}