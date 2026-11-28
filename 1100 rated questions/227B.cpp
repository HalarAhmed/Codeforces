#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    long long n,m;
    cin>>n;
    vector<long long>a(n);
    map<long long,long long>p;  // map for storing positions starting from 1:
    for(long long i=0;i<n;++i)
    {
        cin>>a[i];
    }
    cin>>m;
    vector<long long>b(m);
    for(long long i=0;i<m;++i)
    {
        cin>>b[i];
    }
    long long petya=0,sasha=0;
    
    for(long long i=0;i<n;++i)
    {
        p[a[i]]=i+1;    // key is the element of array and value is the position i-e 1 based indexing
    }
    // petya:
    for(long long i=0;i<m;++i)
    {
        petya+=p[b[i]]; // for simple linear search the no. of comparisons are equal to the position
    }
    // sasha:
    for(long long i=0;i<m;++i)
    {
        sasha+=((n-p[b[i]])+1); // for reverse linear search: (n-postion)+1
    }
    cout<<petya<<" "<<sasha<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
