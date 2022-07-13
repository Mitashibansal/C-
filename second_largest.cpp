#include <bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int arr[n],slargest=INT_MIN;
int MaxNo=INT_MIN;
for (int i=0;i<n;i++)
cin>>arr[i];
for (int i=0;i<n;i++){
MaxNo=max(MaxNo,arr[i]);
}
cout<<MaxNo;
for(int i=0;i<n;i++)
{
    if (arr[i]!=MaxNo){
        if(slargest==INT_MIN||arr[i]>slargest)
            slargest=arr[i];
    }
}
if (slargest==INT_MIN){
    cout<<"no slargest is present";
}
else
cout<<"slargest is "<<slargest;
return 0;}
