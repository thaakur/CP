#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll res=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
            continue;
        else{
            res+=abs(a[i]-a[i-1]);
            a[i]=a[i-1];
        }
    }
    cout<<res;
}
