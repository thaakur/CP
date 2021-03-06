#include<bits/stdc++.h>
using namespace std;
#define ll long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll y,x,res;
        cin>>y>>x;
        ll z=max(y,x);
        ll z2=(z-1)*(z-1);
        if(z%2)
        {
            if(y==z)
                res=z2+x;
            else
                res=z2+2*z-y;
        }
        else
        {
            if(x==z)
                res=z2+y;
            else
                res=z2+z*2-x;
        }
        cout<<res<<endl;
    }
}
