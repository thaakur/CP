#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    int x1=a[0],x2=1;
    for(int i=1;i<n-1;i++){
        x1^=a[i];
    }
    for(int i=2;i<=n;i++){
        x2^=i;
    }
    cout<<(x1^x2);
}
