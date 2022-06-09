#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem=0;
    cin>>n;
    for(;n!=0;)
    {
        rem+=n%10;
        n/=10;
    }
    cout<<rem;
    return 0;
}
