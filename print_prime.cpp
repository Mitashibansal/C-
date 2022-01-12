#include<bits/stdc++.h> 
using namespace std;
 int main()
 { 
  int n , i , x,j=0;
  cout<<"enter the range ";
  cin>>n;
  for(i=2;i<=n;i++)
  {
    for(x=1;x<=i;x++)
     {
       if (i%x==0)
       { j++;
       }
     }
    if (j==2)
     cout<<i<<endl;
    j=0;
  }
  return 0;
 }