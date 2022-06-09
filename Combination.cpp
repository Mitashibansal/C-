#include <bits/stdc++.h>
using namespace std;
/*int fact(int n)
{
    int z=1;
    for(int i=n;i>=1;i--)
    z*=i;
    return z;
}*/
int fact(int n)
{
    if (n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n,r;
    cin>>n>>r;
    int a= fact(n)/(fact(r)*fact(n-r));
    cout<<a;
    return 0;
}
