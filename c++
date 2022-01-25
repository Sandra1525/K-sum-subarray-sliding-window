#include <iostream>
using namespace std;

int max(int a,int b)
{
   
    if(a>b) return a;
    else return b;
}
int main() {
    // Write C++ code here
  int n,i,j,k;
  int sum=0;
  
  cin>>n;
  cin>>k;
  int a[n];
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  i=0;
  j=0;
  int mx=a[0];
  while(j<n)
  {
      sum=sum+a[i];
      if (j-i+1 <k)
      {
      j++;
     
      }
      else 
      if(j-i+1 ==k)
      {
          mx=max(mx,sum);
          sum=sum-a[i];
          i++;
          j++;
      }
      
  }
  cout<<mx<<" ";

    return 0;
}
