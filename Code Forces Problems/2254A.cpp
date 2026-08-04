using namespace std;
#include<bits/stdc++.h>
int main() 
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        vector<long long int>a(3);
        for(long long int i=0;i<3;++i)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int count=0,count1=0;
        
        if(a[0]==a[1] || a[1]==a[2] || a[0]==a[2])
        {
            cout<<count<<endl;
        }
        else
        {
            count=a[2]-a[1];
            count1=a[1]-a[0];
            cout<<min(count,count1)<<endl;
        }
    }
}