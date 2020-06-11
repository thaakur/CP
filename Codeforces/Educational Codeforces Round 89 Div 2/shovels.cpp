#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==0||b==0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			ll res=min(min(a,b),(a+b)/3);
			cout<<res<<endl;
		}
	}
    }
}
