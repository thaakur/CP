#include<bits/stdc++.h>
using namespace std;
int maxcircsubsumnaive(int a[],int n)
{
  int res=a[0];
  for(int i=0;i<n;i++)
  {
    int curr_sum=a[i];
    int curr_max=a[i];
    for(int j=1;j<n;j++)
    {
      int index=(i+j)%n;
      curr_sum+=a[index];
      curr_max=max(curr_sum,curr_max);
    }
    res=max(res,curr_max);
  }
  return res;
}
int kadane(int [],int n)
{
  int res=a[0],maxending=a[0];
  for(int i=1;i<n;i++)
  {
    maxending=max(maxending+a[i],a[i]);
    res=max(res,maxending);
  }
  return res;
}
int maxcircsubsumeff(int a[],int n)
{
  int maxnormal=kadane(a,n);
  if(maxnormal<0)
    return maxnormal;
  int max_sum=0;
  for(int i=0;i<n;i++)
  {
    max_sum+=a[i];
    a[i]=-a[i];
  }
  int maxcircular=max_sum+kadane(a,n);
  return max(maxnormal,maxcircular);
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<maxcircsubsumeff(a,n);
}
