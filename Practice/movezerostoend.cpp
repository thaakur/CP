#include<bits/stdc++>h>
using namespace std;
void movezerosnaive(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      for(int j=i+1;j<n;j++)
        if(a[j]!=0)
          swap(a[i],a[j]);
    }
  }
}
void movezeroseff(int a[],int n)
{
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]!=0)
    {
      swap(a[i],a[cnt]);
      cnt++;
    }
  }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  movezeroseff(a,n);
  for(int x:a)
    cout<<x<<" ";
}
