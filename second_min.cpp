#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],smin=INT_MAX;
    int MinNo=INT_MAX;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    MinNo=min(MinNo,arr[i]);
    cout<<MinNo;
    for(int i=0;i<n;i++)
    {
        if (arr[i]!=MinNo){
            if(smin==INT_MAX||arr[i]<smin)
            smin=arr[i];
        }
    }
    if(smin==INT_MAX)
    cout<<"\n no";
    else
    cout<<"\n smin is" <<smin;
    return 0;
}