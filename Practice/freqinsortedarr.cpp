#include<bits/stdc++.h>
using namespace std;
void freqinsorted(int a[],int n)
{
  int freq=1,i=1;
  while(i<n)
  {
    while(i<n && a[i]==a[i-1])
    {
      freq++;
      i++;
    }
    cout<<a[i-1]<<" "<<freq<<endl;
    freq=1;
    i++;
  }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  freqinsorted(a,n);
}
