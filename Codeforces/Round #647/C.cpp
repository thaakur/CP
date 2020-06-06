//Johnny and another rating drop
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,t,count,j;
    cin>>t;
 
    while(t--){
        cin>>n;
        count=0;
        j=0;
        while(n){
        	if(n%2)
        		count+=pow(2,j+1)-1;
        	n/=2;
        	j++;
        }
        cout<<count<<'\n';
    }
}
