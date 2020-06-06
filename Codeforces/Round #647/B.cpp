//Johnny and his hobbies
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,aaa,t;
    cin>>t;
 
    while(t--){
        cin>>n;
        multiset<int> a,b;
 
        for(int i=0;i<n;i++){
        	cin>>aaa;
        	a.insert(aaa);
        }
 
        bool bb=true;
 
        for(int i=1;i<1025;i++){
        	b.clear();
        	for(auto aaa:a)
        		b.insert(aaa^i);
        	if(b==a){
        		cout<<i<<'\n';
        		bb=false;
        		break;
        	}
        }
        if(bb)
        	cout<<"-1\n";
    }
    return 0;
}
