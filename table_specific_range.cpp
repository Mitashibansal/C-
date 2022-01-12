#include<iostream>
using namespace std;
 int main()
 {
 int n,c,a;
 cout<<"enter the number whose table you want to enter ";
 cin>>n;
 cout<<"enter from which you want no. you want to start the table ";
 cin>>a;
 cout<<"enter from which you want no. you want to start the table ";
 cin>>c;
 for(int i=a;i<=c;i++)
 cout<<n<<"*"<<i<<"="<<n*i<<endl;
 return 0;
 }