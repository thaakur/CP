#include<bits/stdc++.h>
using namespace std;
int stockbuysellnaive(int p[],int start,int end)
{
  if(end<=start)
    return 0;
  int profit=0;
  for(int i=start;i<end;i++)
  {
    for(int j=i+1;j<=end;j++)
    {
      if(p[j]>p[i])
      {
        int curr_profit=p[j]-p[i]+stockbuysellnaive(p,start,i-1)+stockbuysellnaive(p,j+1,end);
        profit=max(profit,curr_profit);
      }
    }
  }
  return profit;
}
int stockbuyselleff(int p[],int n)
{
  int profit=0;
  for(int i=1;i<n;i++)
  {
    if(p[i]>p[i-1])
    {
      profit+=p[i]-p[i-1];
    }
  }
  return profit;
}
int main()
{
  int n;
  cin>>n;
  int p[n];
  for(int i=0;i<n;i++)
    cin>>p[i];
  cout<<stockbuyselleff(p,n); 
}
