#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int n,i;
    cout<<"enter";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            break;
        } 
    }
    if (i==n)
    cout<<"prime";
    return 0;
    
}
/* #include<bits/stdc++.h> 
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter";
    cin>>n;
    for(j=2;j<=n;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
                break;
            }           
        }
    
        if (i==j)
        {
            cout<<j<<endl; 
        }
    }

    return 0;
}*/