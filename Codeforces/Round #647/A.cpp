//Johnny and Ancient Computer
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll minimum=min(a,b);
        ll maximum=max(a,b);
        if (maximum==minimum)
        {
            cout<<"0\n";
            continue;
        }
        if (maximum%minimum==0)
        {
            int ans=0;
            while(maximum%2==0)
            {
                if (maximum<=minimum)
                    break;
                ans++;
                maximum/=2;
            }
            if (maximum==minimum)
            {
                int val1=ans/3;
                ans=ans%3;
                int val2=ans/2;
                ans=ans%2;
                cout<<val1+val2+ans<<endl;
            }
            else
            cout<<"-1\n";
        }
        else
        cout<<"-1\n";
    }
}
