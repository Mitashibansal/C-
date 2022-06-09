#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,rem;
    int sum=0;
    cin>>n;
    int orignal=n;
    for(;n!=0;)
    {
        rem=n%10;
        sum+=pow(rem,3);
        n/=10;
    }
    if(sum==orignal)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
