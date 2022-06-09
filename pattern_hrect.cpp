#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,r;
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if (i==1||i==r||j==1||j==c)
            cout<<"$ ";
            else
            cout<<"  ";
        }
        cout<<"\n";
    }
}
