#include<bits/stdc++.h>
using namespace std;
void rotatearr(int a[],int n)
{
  int temp=a[0];
  for(int i=0;i<n;i++)
    a[i-1]=a[i];
  a[n-1]=temp;
}
void rotatearrbyd(int a[],int d,int n)
{
  for(int i=0;i<d;i++)
    rotatearr(a,n);
}
void reverse(int a[],int l,int h)
{
    while(l<=h)
    {
        swap(a[l],a[h]);
        l++;
        h--;
    }
}
void rotatebyrev(int a[],int d,int n)
{
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}
int main()
{
  int n,d;
  cin>>n>>d;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  //rotatearr(a,n);
  //rotatearrbyd(a,d,n);
  rotatebyrev(a,d,n);
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
