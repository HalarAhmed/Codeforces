using namespace std;
#include<bits/stdc++.h>
int main() 
{
    long long t,n,k,count;
    cin>>t;
    while(t--)
    {
        bool found=false;
        cin>>n>>k;
        string s;
        cin>>s;
        count=0;
        for(long long i=0;i<n;i+=k) // 'n' fields
        {
            found=false;
            for(long long j=i;j<k+i;++j)    // traversing through fields of each farm
            {
                if(s[j]=='0')   // if a farm has John's field, school could be built on it
                {
                    found=true;
                    break;
                }
            }
            if(!found)  // if not then Nhoj's field will be utilised
            {
                ++count;
            }
        }
        cout<<count<<endl;
    }
}