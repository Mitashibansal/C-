#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,i,j;
    cin>>a>>n;
    for(i=a;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
    
        if(j==i)
        cout<<i<<endl;
    }
    return 0;
}
