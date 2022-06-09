#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count=1;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<count<<" ";
            count+=1;
        }
        count=1;
        cout<<endl;
    }
    return 0;

}
