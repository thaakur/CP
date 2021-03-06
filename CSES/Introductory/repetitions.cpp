#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int res=1,i=0;
    for(i=0;i<s.length()-1;i++)
    {
        int cnt=1;
        while(s[i]==s[i+1])
        {
            cnt++;
            i++;
        }
        res=max(res,cnt);
    }
    cout<<res;
}
