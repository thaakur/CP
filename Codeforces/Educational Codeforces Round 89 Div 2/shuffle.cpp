#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x,m,l=0,r=0;
		cin>>n>>x>>m;
		int res=0;
		for(ll i=0;i<m;i++)
		{
			ll n1,n2;
			cin>>n1>>n2;
			if(res==0)
			{
				if((x>=n1)&&(x<=n2))
				{
					res=1;
					l=n1;
					r=n2;
				}
			}
			else
			{
				if((n1<=l)&&(n2>=l))
					l=n1;
				if((n1<=r)&&(n2>=r))
					r=n2;
			}
		}
		cout<<r-l+1<<endl;
	}
	return 0;
}
