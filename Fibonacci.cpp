#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
/*{
    if (n<=0)
        return 0;
    else if (n==1||n==2)
        return 1;
    else 
        return fibonacci(n-1) +fibonacci(n-2);
}*/
int fibonacci(int n)
{
    int t1=0;
    int t2=1;
    int increment;
    for(int i=1;i<=n;i++)
    {cout<<t1<<" ";
    increment=t1+t2;
    t1=t2;
    t2=increment;}
}

int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
