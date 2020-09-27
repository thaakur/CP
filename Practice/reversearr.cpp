#include<bits/stdc++.h>
using namespace std;
void reversearr(int a[],int n)
{
  int l=0,h=n-1;
  while(l<h)
  {
    swap(a[l],a[h]);
    l++;
    h--;
  }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  reversearr(a,n);
  for(int x:a)
    cout<<x<<" ";
}
