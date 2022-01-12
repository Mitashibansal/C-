#include<bits/stdc++.h> 
using namespace std;
 int main()
 { 
  int n , i , j=0;
  cout<<"enter a number ";
  cin>>n;
  for(i=1;i<=n;i++)
  {if (n%i==0)
   j++;
  }
  if (j==2)
  cout<<"prime";
  else
  cout<<"not prime";
  return 0;
 }



