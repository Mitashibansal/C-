#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"enter the values of three sides";
    cin>>s1>>s2>>s3;
    if (s1==s2 || s2==s3 || s3==s1)
    {
        if(s2==s3 && s3==s1)
        cout<<"equilateral";
        else
        cout<<"isosceles";

    }
    else 
    cout<<"Scalene";
    return 0;
}