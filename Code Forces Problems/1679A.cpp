using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long int t,n;
    double x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2!=0 || n<4)
        {
            cout<<-1<<endl;
        }
        else
        {
            y=n/4;  // round down to club it with 2 if rem!=0 for min
            if(n%6==2)
            {
                x=n/6;
                ++x;
            }
            else if(n%6==4)
            {
                x=n/6;
                ++x;
            }
            else
            {
                x=n/6;
            }
            cout<<x<<" "<<y<<endl;
        }
   }
}